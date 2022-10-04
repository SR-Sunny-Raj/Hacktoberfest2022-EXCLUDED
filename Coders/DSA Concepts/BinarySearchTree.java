import java.io.*;

class Node {
	int data;
	Node left;
	Node right;
}

class BST {
	Node root;

	public void insert(int x) {
		Node node = new Node();
		node.data = x;
		node.left = null;
		node.right = null;

		if(root == null)
			root = node;
		else {
			Node a, b;
			a = root;
			b = null;

			while(a != null) {
				b = a;
				if(x < a.data)
					a = a.left;
				else
					a = a.right;
			}

			if(x < b.data)
				b.left = node;
			else
				b.right = node;
		}
	}

	void delete(int x) {
		Node a, b;

		a = root;
		b = null;

		while(a != null && a.data != x) {
			b = a;

			if(x < a.data)
				a = a.left;
			else
				a = a.right;
		}

		if(a == null)
			System.out.println("Element not found");
		else {
			if(a.left == null && a.right == null) {
				if(a == root)
					root = null;
				else {
					if(b.left == a)
						b.left = null;
					else
						b.right = null;
				}
			}
      
			else if(a.left != null && a.right == null) {
				if(a == root) {
					root = root.left;
				}
				else {
					if(b.left == a)
						b.left = a.left;
					else
						b.right = a.left;
				}
			}

			else if(a.left == null && a.right != null) {
				if(a == root)
					root = root.right;
				else {
					if(b.left == a)
						b.left = a.right;
					else
						b.right = a.right;
				}
			}

			else {
				Node c;
				c = a.right;

				while(c.left != null)
					c = c.left;
				c.left = a.left;

				if(a == root)
					root = root.right;
				else {
					if(b.left == a)
						b.left = a.right;
					else
						b.right = a.right;
				}
			}
		}
	}

	public void inorder(Node x) {
		if(x != null)
		{
			inorder(x.left);
			System.out.println(x.data);
			inorder(x.right);
		}
	}

	public void callInorder() {
		if(root != null) {
			Node x = root;
			inorder(x);
		}
		else {
			System.out.println("Tree is Empty");
		}
	}

	public void preorder(Node x) {
		if(x != null) {
			System.out.println(x.data);
			preorder(x.left);
			preorder(x.right);
		}
	}

	public void callPreorder() {
		if(root != null) {
			Node x = root;
			preorder(x);
		}
		else
			System.out.println("Tree is Empty");
	}

	public void postorder(Node x) {
		if(x != null) {
			postorder(x.left);
			postorder(x.right);
			System.out.println(x.data);
		}
	}

	public void callPostorder() {
		if(root != null) {
			Node x = root;
			postorder(x);
		}
		else
			System.out.println("Tree is Empty");
	}
}

class BinarySearchTree {
	public static void main(String args[]) {
		int choice, x;
		boolean run = true;
		Console c = System.console();
		BST obj = new BST();

		while(run) {
			choice = Integer.parseInt(c.readLine("1.Insert    2.Delete    3.Inorder    4.Preorder    5.Postorder    6.Exit : "));

			switch(choice)
			{
				case 1: x = Integer.parseInt(c.readLine("Enter Element to be inserted: "));
						obj.insert(x);
						break;

				case 2: x = Integer.parseInt(c.readLine("Enter Element to be deleted: "));
						obj.delete(x);
						break;

				case 3: obj.callInorder();
						break;

				case 4: obj.callPreorder();
						break;

				case 5: obj.callPostorder();
						break;

				case 6: run = false;
						break;

				default: System.out.println("Invalid Input");
			}
		}
	}
}
