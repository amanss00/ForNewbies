#include <stdio.h>
void swap(int a[], int i,int j) {
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

void maxheapify(int a[],int n,int k){
	int l,r,max;
	l=2*k;
	r=l+1;
	if(l<=n && a[l]>a[k])
		max=l;
	else 
		max=k;
	if(r<=n && a[r]>a[max])
		max=r;
	if(max!=k){
		swap(a,k,max);
		maxheapify(a,n,max);
	}
}

void build_maxheap(int a[],int n){
	for(int i=n/2;i>=1;i--)
		maxheapify(a,n,i);
}

void heapsort(int a[],int n){
	build_maxheap(a,n);
	for(int i=1;i<=n-1;i++){
		swap(a,1,n-i+1);
		maxheapify(a,n-i,1);
	}
}

int main() {
    int i,n;
    printf("Enter the Size of the Array :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the Array :\n");
    for(int i=1; i<=n; i++)
    	scanf("%d",&a[i]);
    heapsort(a,n);
    printf("Sorted array:\n");
    for (i = 1; i <=n; ++i)
    	printf("%d\t", a[i]);
    return 0;
}
