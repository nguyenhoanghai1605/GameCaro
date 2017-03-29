#include<iostream>
using namespace std;

char banco[3][3] = {'1','2','3','4','5','6','7','8','9'};
char nguoichoi='X';
void vebanco(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<banco[i][j]<<" ";
		}
		cout<<endl;
	}
}
void NhapXO(){
	int n;
	cout<<"\nVui long nhap so voi vi tri tuong ung: ";
	cin>>n;
	switch(n){
		case 1: //n==1
			banco[0][0] = nguoichoi;
			break;
		case 2: //n==2
			banco[0][1] = nguoichoi;
			break;
		case 3: //n==3
			banco[0][2] = nguoichoi;
			break;
		case 4: //n==4
			banco[1][0] = nguoichoi;
			break;
		case 5: //n==5
			banco[1][1] = nguoichoi;
			break;
		case 6: //n==6
			banco[1][2] = nguoichoi;
			break;
		case 7: //n==7
			banco[2][0] = nguoichoi;
			break;
		case 8: //n==8
			banco[2][1] = nguoichoi;
			break;
		case 9: //n==9
			banco[2][2] = nguoichoi;
			break;
	}
}
void LanLuot(){
	if(nguoichoi == 'X')
		nguoichoi = 'O';
	else{
		nguoichoi = 'X';
	}
}
char NguoiThang(){
	if(banco[0][0]=='X' && banco[0][1]=='X' && banco[0][2]=='X')
		return 'X';
	if(banco[1][0]=='X' && banco[1][1]=='X' && banco[1][2]=='X')
		return 'X';
	if(banco[2][0]=='X' && banco[2][1]=='X' && banco[2][2]=='X')
		return 'X';
		
	if(banco[0][0]=='X' && banco[1][0]=='X' && banco[2][0]=='X')
		return 'X';
	if(banco[0][1]=='X' && banco[1][1]=='X' && banco[2][1]=='X')
		return 'X';
	if(banco[0][2]=='X' && banco[1][2]=='X' && banco[2][2]=='X')
		return 'X';
		
	if(banco[2][0]=='X' && banco[1][1]=='X' && banco[0][2]=='X')
		return 'X';
	if(banco[0][0]=='X' && banco[1][1]=='X' && banco[2][2]=='X')
		return 'X';
	//=================================================
	if(banco[0][0]=='O' && banco[0][1]=='O' && banco[0][2]=='O')
		return 'O';
	if(banco[1][0]=='O' && banco[1][1]=='O' && banco[1][2]=='O')
		return 'O';
	if(banco[2][0]=='O' && banco[2][1]=='O' && banco[2][2]=='O')
		return 'O';
		
	if(banco[0][0]=='O' && banco[1][0]=='O' && banco[2][0]=='O')
		return 'O';
	if(banco[0][1]=='O' && banco[1][1]=='O' && banco[2][1]=='O')
		return 'O';
	if(banco[0][2]=='O' && banco[1][2]=='O' && banco[2][2]=='O')
		return 'O';
		
	if(banco[2][0]=='O' && banco[1][1]=='O' && banco[0][2]=='O')
		return 'O';
	if(banco[0][0]=='O' && banco[1][1]=='O' && banco[2][2]=='O')
		return 'O';
	return 'H';
}
int main(){
	cout<<"========== GAME CO CARO =========="<<endl;
	vebanco();
	while(NguoiThang()!='X' && NguoiThang()!='O'){
		NhapXO();
		cout<<endl;
		vebanco();
		if(NguoiThang()=='X'){
			cout<<"\nX thang roi! Hay bat dau tro choi moi";
		}else if(NguoiThang()=='O'){
			cout<<"\nO thang roi! Hay bat dau tro choi moi";
		} 
		LanLuot();
	}
}
