int search(int a[],int n,int num)
{
int low=0,high=n,mid,loc;
while(low<=high)
{
mid=(low + high)/2;
if(num<a[mid])
high=mid -1;
else if(num>a[mid])
low=mid + 1;
else if(num==a[mid])
{
printf("\nSearch is successful\n");
loc=mid+1;
return loc;
}
}
return 0;
}
