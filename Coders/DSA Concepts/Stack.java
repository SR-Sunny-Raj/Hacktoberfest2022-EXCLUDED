class CustomStack{
    private int[] data;
    private final static int DEFAULT_SIZE = 100;
    private int top = -1;
    public CustomStack(){
        data = new int[DEFAULT_SIZE];

    }

    public CustomStack(int size){
        data = new int[size];
    }

    //Pushes an item onto the top of this stack.
    // Parameters:
    // item - the item to be pushed onto this stack.
    // Returns:
    // the item argument.    
    // Throws:
    // Exception - if this stack is full.
    public int push(int item) throws Exception{
        if(isFull()) {
            throw new Exception("Stack Overflow");
        }
        data[++top] = item;
        return item;
    }


    //Removes the object at the top of this stack and returns that object as the value of this function.
    // Returns:
    // The object at the top of this stack.
        
    // Throws:
    // Exception - if this stack is empty.

    public int pop() throws Exception{
        if(isEmpty()){
            throw new Exception("Stack Underflow");
        }
        int item = data[top--];
        return item;
    }


    // Looks at the object at the top of this stack without removing it from the stack.
    // Returns:
    // the object at the top of this stack.
    // Throws:
    // Exception - if this stack is empty.
    public int peek() throws Exception{
        
        if(isEmpty()){
            throw new Exception("Stack Underflow");
        }
        return data[top];
    }


    // Tests if this stack is full.
    // Returns:
    // true if and only if this stack is full; false otherwise.
    public boolean isFull(){
        return data.length < top;
    }

    // Tests if this stack is empty.
    // Returns:
    // true if and only if this stack contains no items; false otherwise.
    public boolean isEmpty(){
        return top < 0;
    }
}


public class Stack {
    public static void main(String args[]) throws Exception {
        CustomStack stack<int> = new CustomStack(10);

        stack.push(1);
        stack.push(2);
        stack.push(3);
        int item = stack.pop();
        System.out.println(item);
        System.out.println(stack.peek());
    }
}