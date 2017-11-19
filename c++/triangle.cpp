bool triplet(long a,long b,long c){
	if(a<=0 || b<=0 || c<=0)
		return false;
	else if(a+b<=c)
		return false;
	else{
		long long p1,q1;
		p1=a,q1=c+b;
		long long div = __gcd(p1,q1);
		p1/=div;
		q1/=div;
	//	cout<<div<<" "<<p1<<" "<<q1<<endl;
		
		long long p2,q2;
		p2=c-b,q2=a;
		div = __gcd(p2,q2);
		p2/=div;
		q2/=div;
		
		return (p1==p2 && q1==q2 );
	}
}

string checkTriplet(long long a,long long b,long long c){
	
	if(triplet(a,b,c))
		return "Yes";
	else{
		return "No";
	}
}
