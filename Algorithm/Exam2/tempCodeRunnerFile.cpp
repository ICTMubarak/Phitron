 int cc = 0;
    for(int i=1;i<=N;i++){
        if(visitet[i]) continue;
        bfs(i);
        cout<<i<<" I "<<endl;
        cc++;
    }