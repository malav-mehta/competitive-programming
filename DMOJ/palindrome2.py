s=input()
t=list('!@'+'@'.join(s)+'@#')
p=[0]*len(t)
c=r=mxL=idx=0
for i in range(1,len(t)-1):
	if i<r:p[i]=min(r-i,p[2*c-i])
	while t[i+p[i]+1]==t[i-(p[i]+1)]:p[i]+=1
	if i+p[i]>r:r,c=i+p[i],i
	if p[i]>mxL:mxL,idx=p[i],i
print(len([c for c in t[idx-mxL:idx+mxL+1] if c not in ('!','@','#')]))