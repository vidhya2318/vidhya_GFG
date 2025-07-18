class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        
    StackNode *t=new StackNode(x);
     if(t==NULL)
      return;
  
       t->next=top;
       top=t;
        
    }

    int pop() {
        
       if(top==NULL)
         return -1;
  
       int x=top->data;
       top=top->next;
       return x;
    }

    MyStack() { top = NULL; }
};