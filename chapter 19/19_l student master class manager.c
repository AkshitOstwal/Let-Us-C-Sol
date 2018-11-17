#include<stdio.h>
#include<conio.h>

void main()
{
	struct std{ int r;
	char n[30];
	};
	struct std mf,newf;
	
	struct trans{ char u;
	int r;
	char n[30];
	} tf;
	
	FILE * fp,* ft,* fk;
	fp=fopen("master.txt","r");
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	ft=fopen("transstd.txt","r");
	if(ft==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	fk=fopen("modifed.txt","w");
	
	while(fscanf(fp,"%d %s ",&mf.r,mf.n)!=EOF)
	{
		while(fscanf(ft,"%c %d %s ",&tf.u,&tf.r,tf.n)!=EOF)  
		{
			
			if(tf.r==mf.r)
			{
				if(tf.u=='a')
				strcpy(mf.n,tf.n);
			}
		}
		newf=mf;
		printf("%d %s \n",newf.r,newf.n);
		fprintf(fk,"%d %s\n",newf.r,newf.n);
	}
	
	fclose(fp);
	fclose(ft);
	fclose(fk);
}
