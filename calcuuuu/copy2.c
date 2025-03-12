#include <stdio.h>
int main(){
	int n,m, l,k; 
	scanf("%d %d", &n, &m); //2 2
	scanf("%d %d", &l, &k); //2 2
	int a[n][m], b[l][k], c[n][k];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]); 
		}
	} 

    for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d", a[i][j]); 
		}
	}



	for(int i=0; i<l; i++){
		for(int j=0; j<k; j++){
			scanf("%d", &b[i][j]); 
		}
	} 

    for(int i=0; i<l; i++){
		for(int j=0; j<k; j++){
			printf("%d", b[i][j]); 
		}
	}

	//i<2   j<2; 
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			c[i][j] = (a[i][j] * b[i][j] + a[i][j+1] * b[i+1][j]);
		}
	}

    for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			printf("%d ", c[i][j]);
		}
	}
	return 0; 
}