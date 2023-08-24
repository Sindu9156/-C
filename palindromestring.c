int isPalindrome(char  S[])
    {
        int i,flag=0,n,m;
        n=strlen(S);
        m=n-1;
        for(i=0;i<n/2;i++){
            if(S[i]==S[m--])
               flag++;
        }
        if(flag==n/2)
           return 1;
        return 0;
     
    }
