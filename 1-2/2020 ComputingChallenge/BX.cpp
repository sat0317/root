#include <stdio.h>

int main(){
	int i, j, cnt=0, a[100][100]={0, }, n, m;
	scanf("%d %d", &n, &m);
	
	for(i=0;i<n+m;i++){
		for(j=0;j<=i;j++){
			if(i-j<m&&i-j>=0&&j>=0&&j<n)
			a[j][i-j] = ++cnt;
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=m-1;j>=0;j--){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
