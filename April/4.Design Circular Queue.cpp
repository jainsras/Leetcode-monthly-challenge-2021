class MyCircularQueue {
    
    int size, rear, front;
    int *arr;
    // int s, c=0;
public:
    
    MyCircularQueue(int k) {
        
        arr = new int[k];
        size = k;
        front = rear = -1;
      
    }
    
    bool enQueue(int value) {
        if(isFull())
        {   
            // cout<<rear<<endl;
           return false;
        }
        
        else if (front == -1) 
        {
            front =0;
            rear = 0;
            arr[rear] = value;
        }
  
        else if (rear == size-1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
  
        else
        {
            rear++;
            arr[rear] = value;
        }
        // cout<<rear<<endl;
           return true;
    }
    
    bool deQueue() {
        
        if (front == -1)
        {
            return false;
        }

        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size-1)
            front = 0;
        else
            front++;

        return true;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front == -1)
            return 1;
        return 0;
        
    }
    
    bool isFull() {
     
        if(front == 0 && rear == size-1)
        {
            // cout<<"y";
            return 1;
        }
           
        if(front !=0 && rear == (front-1)%(size-1))
          {
            // cout<<rear<<" "<<front;
            // cout<<"n";
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */