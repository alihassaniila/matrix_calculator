//group 7

#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
using std::setw;

void chap(double matris[10][10], int satr, int sotoon)
{
	for (int i = 0; i < satr; i++)
	{
		for (int j = 0; j < sotoon; j++)
		{
			cout << setw(8) << matris[i][j];
			}
			cout << endl;
		}
}

void zarb(int matrisA[10][10],int matrisB[10][10], int m ,int n ,int p,int q){
	if(n == p){
		int c[m][q];
	    for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				c[i][j]=0;
			}	
		}
		for(int i = 0; i < m; i++){
			for( int j = 0; j < q; j++){
				for(int k = 0; k < n; k++){
					c[i][j] += matrisA[i][k] * matrisB[k][j];
				}
					cout<< setw(5)<<c[i][j];
			}
					cout<<endl;
		}
		}
	else {
		cout<<" Baray zarb do matris tedad stoon ha az matris A bayad ba tedad satr ha az matris B barabar bashad.\a\n";		
	}
	}


double determinant( double d[10][10], int n) {
   double det = 0;
   double submatrix[10][10];
   if (n == 2)
   {
   det = ((d[0][0] * d[1][1]) - (d[1][0] * d[0][1]));}
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = d[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * d[0][x] * determinant( submatrix, n - 1 ));
      }
   }
   return det;
} 
void menu(){
	cout <<"***khosh amadid***\n\n\n";
	cout <<"lotfan 1 ya 2 matris ra vared karde v sepas tebgh menu zir amliat mored nazzar ra entekhab konid \n\n";
	cout<<"0 : vared kardan A \n";
	cout<<"1 : vared kardan B \n";
	cout<<"2 : ja be ja kardan A va B \n";
	cout<<"3 : enteghal A be B \n";
	cout<<"4 : enteghal B be A \n";
	cout<<"5 : mohasebe A*B \n";
	cout<<"6 : mohasebe A + B \n";
	cout<<"7 : mohasebe A/B \n"; 
	cout<<"8 : mohasebe A - B \n";
	cout<<"9 : mohasebe a * A \n";
	cout<<"10 : mohasebe determinan A \n";
	cout<<"11 : mohasebe determinan B \n";
	cout<<"12 : namayesh matris A \n";
	cout<<"13 : namayesh matris B \n";
	cout<<"100 : payan\n\n\n";
}

void calculator(){
	int m, n , p ,q , bcheck, acheck, amaliat;
    while(1){
    	cout << "\nAmaliat morde nazar ra entkhab konid: ";
    	cin >> amaliat;
    	switch(amaliat){
    		case 0:
    			double a[10][10];
    			acheck=1;
    			cout << " Tedad satr haye matris A ra vared konid : ";
    			cin >> m;
    			cout << " Tedad sotoon haye matris A ra vared konid : ";
    			cin >> n;
    			cout << " Anaasor matris A ra varred konid\n";
			    for (int i = 0; i < m; i++) {
			        for (int j = 0; j < n; j++) {
			            cout << " A(" << i + 1 << "," << j + 1 << ") = ";
			            cin >> a[i][j];
			        }
			    }
			    break;
			case 1:
				double b[10][10];
				bcheck=1;
				cout << " Tedad satr haye matris B ra vared konid : ";
    			cin >> p;
    			cout << " Tedad sotoon haye matris B ra vared konid : ";
    			cin >> q;
    			cout << " Anaasor matris B ra varred konid\n";
			    for (int i = 0; i < p; i++) {
			        for (int j = 0; j < q; j++) {
			            cout << " B(" << i + 1 << "," << j + 1 << ") = ";
			            cin >> b[i][j];
			        }
			    }
				break;	    
    		case 100:
    			return;
    		case 2: // ja be jaei
	    		if(acheck==1){
					if(bcheck==1){
						if(m==p && n==q){
		    				double c[10][10];
		    				for (int i = 0; i < m; i++) {
						        for (int j = 0; j < n; j++) {
						            c[i][j] = a[i][j];
						        }
						    }
						    for (int i = 0; i < p; i++) {
						        for (int j = 0; j < q; j++) {
						            a[i][j] = b[i][j];
						        }
						    }
						    for (int i = 0; i < m; i++) {
						        for (int j = 0; j < n; j++) {
						            b[i][j] = c[i][j];
						        }
						    }
						}
						else{
							cout << "Tedad satr va sotoon haye A va B barabar nist \a\n";
						}
					}
					else{
						cout<<"matris B ra vared nakardid \a\n";
					}
				}
				else{
						cout<<"matris A ra vared nakardid \a\n";
					}
    			break;
    		case 3: //enteghal A be B
    			if(acheck==1){
					if(bcheck==1){
						if(m==p && n==q){
		    				for (int i = 0; i < m; i++) {
						        for (int j = 0; j < n; j++) {
						            b[i][j] = a[i][j];
						        }
						    }
						}else{
							cout << "Tedad satr va sotoon haye A va B barabar nist \a\n";
						}
					}
					else{
						cout<<"matris B ra vared nakardid \a\n";
					}
				}
				else{
						cout<<"matris A ra vared nakardid \a\n";
					}
    			break;
    		case 4: //enteghal B be A
	    		if(acheck==1){
					if(bcheck==1){	
							if(m==p && n==q){
			    				for (int i = 0; i < p; i++) {
							        for (int j = 0; j < q; j++) {
							            a[i][j] = b[i][j];
							        }
							    }
							}
							else{
								cout << "Tedad satr va sotoon haye A va B barabar nist \a\n";
							}
						}
						else{
							cout<<"matris B ra vared nakardid \a\n";
						}
				}
				else{
					cout<<"matris A ra vared nakardid \a\n";
				}
    			break;
    		case 5: //zarb A*B
    			if(acheck==1){
		    		if(bcheck==1){
						if(n == p){
		    				double h[10][10];
		    				for(int i = 0; i < m; i++){
								for(int j = 0; j < q; j++){
						            h[i][j]=0;
						        }	
							}
							
							for(int i = 0; i < m; i++){
						        for( int j = 0; j < q; j++){
						            for(int k = 0; k < n; k++){
						            	h[i][j] += a[i][k] * b[k][j];
									}				            
						        }
						    }
						    n=q;
						    for (int i = 0; i < m; i++) {
						        for (int j = 0; j < q; j++) {
						            a[i][j] = h[i][j];
						        }
						    }
						    
						    chap (h,m,q);
						}
						else{
							cout<<" Baray zarb do matris tedad stoon ha az matris A bayad ba tedad satr ha az matris B barabar bashad.\a\n";	
						}
					}
					else{
						cout<<"matris B ra vared nakardid \a\n";
					}
			}
				else{
						cout<<"matris A ra vared nakardid \a\n";}
        		break;
        	case 6: //jame do matris
        		if(acheck==1){
					if(bcheck==1){
						if(m==p && n==q){
		    				for (int i = 0; i < p; i++) {
						        for (int j = 0; j < q; j++) {
						            a[i][j] = a[i][j] + b[i][j];
						            cout<< setw(5)<<a[i][j];
						        }
						        cout<<endl;
						    }
						}
						else{
							cout << "Tedad satr va sotoon haye A va B barabar nist\a\n";
					}
					}
					else{
						cout<<"matris B ra vared nakardid \a\n";
					}
				}
				else{
						cout<<"matris A ra vared nakardid \a\n";
    			break;
    		case 7:
    			if(determinant(b, n)!=0){
						if(p==q && q==2 && n==2){
						int zm;
						double temp;
						double o[10][10];
						for (int i = 0; i < p; i++) {
							        for (int j = 0; j < q; j++) {
							            o[i][j] = b[i][j];
							        }
							    }
						temp=o[0][0] ;
						o[0][0]=o[1][1];
						o[1][1]=temp;
						o[0][1]=-1*o[0][1];
						o[1][0]=-1*o[1][0];
						for (int i=0 ; i < 2; i++){
							for ( int j=0; j<2; j++){
								o[i][j]=1/determinant(b, p)*o[i][j];
							}
						}
								double y[m][q];
			    				for(int i = 0; i < m; i++){
									for(int j = 0; j < q; j++){
							            y[i][j]=0;
							        }	
								}
								for(int i = 0; i < m; i++){
							        for( int j = 0; j < q; j++){
							            for(int k = 0; k < n; k++){
							            	y[i][j] += a[i][k] * o[k][j];
										}
							            
							        }
							    }
							    n=q;
							    for (int i = 0; i < m; i++) {
							        for (int j = 0; j < q; j++) {
							            a[i][j] = y[i][j];
							        }
							    }
							    
							    chap (a,m,q);
						}
					else{
						cout<<"baraye thgsim matris B bayad 2 * 2 bashad va ya tedad sotoon matris A barabar 2 bashad\n\a";
					}
				}
				else{
					cout<<"determinan matris B barabar 0 ast va taghsim nemishavan\n\a";
				}
				break;	
    		case 8: //tafrigh do matris
	        	if(acheck==1){
					if(bcheck==1){	
						if(m==p && n==q){
		        			
		    				for (int i = 0; i < p; i++) {
						        for (int j = 0; j < q; j++) {
						            a[i][j] = a[i][j] - b[i][j];
						            cout<< setw(5)<<a[i][j];
						        }
						        cout<<endl;
						    }
						}
						else{
							cout << "Tedad satr va sotoon haye A va B barabar nist \a\n";
						}
					}
					else{
						cout<<"matris B ra vared nakardid \a\n";
					}
				}
				else{
						cout<<"matris A ra vared nakardid \a\n";
					}
    			break;
    		case 9: // adad sahih dar matris
    			if(acheck==1){
	    			int zarib;
	    			cout<<"zarib delkhah ra vared konid :";
	    			cin>> zarib;
					for (int i = 0; i < m; i++){
						for (int j = 0; j < n; j++){
							a[i][j]=zarib*a[i][j];
							cout << setw(5) <<a[i][j];
						}
					cout << endl;
					}
				}
				else{
					cout<<"matris A ra vared nakardid \a\n";
					}
				break;	
    		case 10: //determinan A
    			if(acheck==1){
					if(m == n){
	    				cout<<"Determinant of the matrix is "<< determinant(a, n);
	 	
					}
					else{
						cout << "baraye mohasebe deteminant bayad satr va sotoon barabar  bashad \a\n";
					}
				}
				else{
					cout<<"matris A ra vared nakardid \a\n";
					}
				break;
			case 11: //determinan B
				if(bcheck==1){
	    			if(p == q){
	    				cout<<"Determinant of the matrix is "<< determinant(b, p);
	 	
					}
					else{
						cout << "baraye mohasebe deteminant bayad satr va sotoon barabar  bashad \a\n";
					}
				}
				else{
					cout<<"matris B ra vared nakardid \a\n";
					}
				break;		
    		case 12: // namayesh A
				if(acheck==1){
				chap(a,m,n);
				}
				else{
					cout<<"matris A ra vared nakardid \a\n";
					}
    			break;	
    		case 13: // namayesh B
    			if(bcheck==1){
					chap(b,p,q);
				}
				else {
					cout<<"matris B ra vared nakardid \a\n";
				}
    			break;
		}
	}
}
}
int main()
{
	menu();
   calculator();
}



