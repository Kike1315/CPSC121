
#ifndef stacklib_h
#define stacklib_h

template <class T, int n>
class STACK
{
private:
    T a[n];
    int counter;
public:
    void clearStack()
    {
        counter = 0;
    }
    
    bool emptyStack()
    {
        if(counter == 0)
            return true;
        else
            return false;
    }
    
    bool fullStack()
    {
        return (counter == n)? true: false;
    }
    
    void pushStack(T x)
    {
        a[counter] = x;
        counter++;
    }
    
    T popStack()
    {
        counter--;
        return a[counter];
    }
};

#endif
