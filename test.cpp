#include<bits/stdc++.h>
#include<stdio.h>

#define INF 0x3FFFFFFF
#define eps 1e-12
using namespace std;
inline int read()
{
        int x=0,f=1;char ch=getchar();
            while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
                while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
                    return x*f;
}
int r1,r2,n,sum;

int main()
{
        register int i,x,y,r;
            double d;
                r1=read(); r2=r1-read();
                    n=read();
                        for (i=1;i<=n;++i)
                                {
                                            x=read(); y=read(); r=read();
                                                    d=sqrt(x*x+y*y);
                                                            if (r+r2<=d+eps&&r1-r>=d-eps) ++sum;
                                                                }
                            printf("%d",sum);
}
