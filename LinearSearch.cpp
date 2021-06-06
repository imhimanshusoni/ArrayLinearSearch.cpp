    #include<iostream>
    using namespace std;
    int main()
    {
        int A[10],n=10,key,temp,count=0;;
        cout<<"Enter the Array (10 terms): ";
        for(int i=0;i<10;++i)
        {
            cin>>A[i];
        }
        cout<<"Enter The Element You Want To Find: ";
        cin>>key;
        for(int i=0;i<10;++i)
        {
            if(A[i]==key)
            {
                cout<<"Element "<<key<<" Fount at index "<<i<<endl;
                count++;
            }
            else
            continue;
        }
        if(count==0)
        cout<<"Element Not Found.";
        return 0;
    }