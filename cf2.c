#include<stdio.h>
int main()
{
	long long int score=0,match,win=0,f=0,draw=0,w,d;
	scanf("%lld %lld %lld %lld",&match,&score,&w,&d);
	if(w*match<score)
		f=0;
	else if(score==0)
//	{
	f=1;
//	}
	else
	{
		int nigga;
		nigga=score-(score%w);
		while(score>=d)
		{
			if((score-nigga)%d==0)
			{
				draw=(score-nigga)/d;
				win=nigga/w;
				f++;
				if(draw<match && win<match)
				break;
			}
			else 
				nigga=nigga-w;
		}	
	}
	if(f==0)
		printf("-1");
	else
	{
		printf("%lld %lld",win,draw);
		long long int k;
		k=match-win-draw;
		printf(" %lld",k);
	}
	return 0;

}


