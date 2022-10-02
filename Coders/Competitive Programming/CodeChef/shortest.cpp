/*
Problem Link -: https://www.codechef.com/problems/SHORTEST?tab=statement
Solution -:
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include <utility>
#include<queue>
#include <unordered_map>
#include <unordered_set>
#include<climits>
void traverse(unordered_map< int, vector< pair <int,int> > > graph)
{
	unordered_map< int, vector< pair <int, int> > >::iterator it;
	for(it=graph.begin();it!=graph.end();++it)
	{
		cout<<"vertex : "<<it->first<<endl;
		vector< pair<int, int> >::iterator it1;
		// cout<<it->second	
		for(it1=it->second.begin();it1!=it->second.end();++it1)
		{
			cout<<it1->first<<" "<<it1->second<<endl;
		}
	}
}
class CompareDist
{
public:
	bool operator()(pair <int, int> a, pair <int, int> b)
	{
		return a.second>b.second;
	}
};
vector<int> dijkstra(unordered_map< int, vector< pair <int,int> > > graph, int node)
{
	// cout<<"dij"<<endl;
	unordered_set< int > visited, notvisited;
	for(unordered_map<int,vector<pair <int,int> > >::iterator it=graph.begin();it!=graph.end();it++)
	{
		notvisited.insert(it->first);
	}
	vector<int> dist(notvisited.size()+1,INT_MAX);
	dist[node]=0;

	priority_queue< pair <int, int>, vector< pair <int,int> >, CompareDist> q;
	q.push(make_pair(node,0));
	
	while(!notvisited.empty())
	{
	

		pair<int,int> cur= q.top();
		q.pop();
		
		int current_vertex = cur.first;
		
		notvisited.erase(current_vertex);
		visited.insert(current_vertex);
		
		vector< pair<int,int> > edges = graph[current_vertex];

		vector< pair<int,int> >::iterator eit;
		for(eit=edges.begin();eit!=edges.end();eit++)
		{
			
			if(visited.find(eit->first)!=visited.end())
			{
				continue;
			}	
			
			if(dist[eit->first]>dist[current_vertex]+eit->second)
			{
				dist[eit->first] = dist[current_vertex] + eit->second;
		
				q.push(make_pair(eit->first,dist[eit->first]));

			}
			
		}


	}
	// cout<<"Distances :"<<endl;

	// for(int i=0;i<dist.size();i++)		
	// {
	// 	if(dist[i]==0||dist[i]==INT_MAX)
	// 	{
	// 		continue;
	// 	}	
	// 	cout<<dist[i]<<' ';
	// }
	// cout<<endl;

	

	return dist;


	
	

}
int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int m;
        int q;
        unordered_map< int, vector< pair <int,int> > > graph;
        cin >> n >> m>>q;
        for(int a1 = 0; a1 < m; a1++)
        {
            int x;
            int y;
            int r;
            cin >> x >> y >> r;
            if (graph.find(x)==graph.end())
            {
            	pair<int,int> p(y,r);
            	vector< pair< int, int> > a;
            	a.push_back(p);
            	graph[x] = a;
            }
            else
            {
            	pair<int,int> p(y,r);

            	graph[x].push_back(p);
            }
            if (graph.find(y)==graph.end())
            {
            	pair<int,int> p(x,r);
            	vector< pair< int, int> > a;
            	a.push_back(p);
            	graph[y] = a;
            }
            else
            {
            	pair<int,int> p(x,r);
            	graph[y].push_back(p);
            }

        }
        vector<int> ans = dijkstra(graph,1);
        for(int i=0;i<q;i++)        	
        {
        	int x;
        	cin>>x;
        	cout<<ans[x]<<endl;
        }

        
        
    }


    return 0;
}
