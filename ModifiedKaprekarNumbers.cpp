void kaprekarNumbers(int p, int q) {
    int index = 0;
    for(long int i=p;i<=q;i++){
        if(i==0)
            {
            cout<<i;
            
        }
        else if(i==10||i==100||i==1000||i==10000)
        {
            continue;
        }
        else{
        int base = 10;
        long int divisor = base;
        while ( (i*i) / divisor > divisor ) divisor *= base;
        if((((i*i)/divisor) + ((i*i)%divisor)) == i)
        {
            index = 1;
            cout<<i<<" ";
        }
        }
    }
    if(index==0)
        {
        cout<<"INVALID RANGE";
    }
    cout<<endl;
}
