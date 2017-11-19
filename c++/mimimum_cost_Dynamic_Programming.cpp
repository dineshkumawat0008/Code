for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>cost[i][j];
				if(cost[i][j]==0){
					cost[i][j]=MAX;
				}
				
			}
		}
		
		
int mincost[m][n];
		mincost[0][0]=cost[0][0];
		
		for(int i=1;i<m;i++)
			mincost[i][0]=mincost[i-1][0]+cost[i][0];
		for(int j=1;j<n;j++)
			mincost[0][j]=mincost[0][j-1]+cost[0][j];
		
		for(int i=1;i<m;i++)
			for(int j=1;j<n;j++)
				mincost[i][j]=min(mincost[i-1][j],mincost[i][j-1])+cost[i][j];
