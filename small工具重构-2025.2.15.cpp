#include<bits/stdc++.h>
using namespace std;
double sortsz[100000],data[9901];
int data_in_number;
void fastsort(int l,int r,int p)
{//���� 
	if(l>=r) return ;
	int i=l,j=r,mid=sortsz[(l+r)/2];
	while(i<=j)
	{
		if(p==1)
		{
			while(sortsz[i]<mid) i++;
			while(sortsz[j]>mid) j--;	
		}
		else if(p==2)
		{
			while(sortsz[i]>mid) i++;
			while(sortsz[j]<mid) j--;
		}
		if(i<=j){
			swap(sortsz[i],sortsz[j]);
			i++;
			j--;
		}
	}
	if(p==1){
		if(l<j) fastsort(l,j,1);
		if(i<r) fastsort(i,r,1);
	}
	if(p==2)
	{
		if(l<j) fastsort(l,j,2);
		if(i<r) fastsort(i,r,2);
	}
}
int main()
{
	int jcn,aven,paixun,strpaixun,subpos,sublen;
	int str_erase_pos,str_erase_len,str_insert_pos,str_replace_pos,str_replace_len,c,d,wsN,data_in_number;
	long long jcsum=1;
	string pd,strpaixu[10000],str_gr_pd,str_zfc="����һ�������ַ���",str_find_str,zfc_cz,data_pd;
	string str_xg_pd,str_zfc_append,str_insert,str_replace,othermaths_pd,str_size_linshi,str_size_lspd;
	double avesum=0,ave,a,b,data_count_num;
	char str_del_pd,zf_ascll,data_sort_fxpd,data_del_pd,YunsuanPd,ynpd,data_count_pd;
	cout<<"    <������Ϣ>����help��ȡ���� by xjhjtz0320"<<endl; 
	for(;;)//��ѭ��   
	{
		cin>>pd;
		if(pd=="exit") return 0;//�������� 
		else if(pd=="help")//���� 
		{
			cout<<"--------------------------------"<<endl;
			cout<<"������������maths" <<endl; 
			cout<<"������������othermaths"<<endl;
			cout<<"�ַ�����������str"<<endl; 
			//cout<<"�ַ�����������strpaixu���ֵ���"<<endl; 
			cout<<"��ֵ������������data(ԭ������������)"<<endl; 
			cout<<"������������paixu����С����"<<endl; 
			cout<<"�˳�����exit"<<endl; 
			cout<<"������ʾ��������clean"<<endl;
			cout<<"ascll��ת������ascll"<<endl;
			cout<<endl;
		} 
		else if(pd=="place") cout<<"��ǰĿ¼������ѡ��Ŀ¼"<<endl; 
		else if(pd=="maths")//�������� 
		{
			cout<<"    <������Ϣ>��������ʽ����ǰ��֧������3+1,4-2,7*3,8/2����ʽ�ӣ���������:3+2)"<<endl;
			cout<<"    <������Ϣ>������һ�κ��˳�!"<<endl;
			cin>>a>>YunsuanPd>>b;
			if(YunsuanPd=='+') cout<<a+b;
			if(YunsuanPd=='-') cout<<a-b;
			if(YunsuanPd=='*') cout<<a*b;
			if(YunsuanPd=='/'&&b!=0) cout<<a/b;
				else if(YunsuanPd=='/'&&b==0) cout<<"    <������Ϣ>���ܳ���0��"<<endl;  
			
		}
		else if(pd=="othermaths")//������ѧ���� 
		{
			cout<<"    <������Ϣ>�������������,��Ҫ��������othermathshelp,��������return"<<endl; 
			for(;;)
			{
				cin>>othermaths_pd;
				if(othermaths_pd=="othermathshelp"){
					cout<<"--------------------------------"<<endl<<"����pow����������"<<endl<<"����sprt������"<<endl<<"����abs�������ֵ"<<endl;
					cout<<"����%����ȡ��"<<endl<<"����ave��ƽ��ֵ����ȷ�����λ��"<<endl<<"����jc����׳�"<<endl;
				}
				else if(othermaths_pd=="pow")
				{
					cout<<"    <������Ϣ>�����������ָ��"<<endl;
					cin>>a>>b;
					cout<<pow(a,b);
				}
				else if(othermaths_pd=="sqrt"){
					cout<<"    <������Ϣ>������Ҫ��ƽ������"<<endl;
					cin>>a;
					cout<<sqrt(a)<<endl;
				}
				else if(othermaths_pd=="abs")
				{
					cout<<"    <������Ϣ>������Ҫ�����ֵ����"<<endl;
					cin>>a;
					cout<<abs(a)<<endl;
				}
				else if(othermaths_pd=="%"){cout<<"������a��aȡ�����b"<<endl;cin>>c>>d; cout<<c%d;}
				else if(othermaths_pd=="jc")
				{
					cout<<"    <������Ϣ>���������׳˵�n"<<endl; 
    				cin>>jcn;
    				for(int jci=1;jci<=jcn;jci++){
    				jcsum*=jci;
					}
    				cout<<jcsum<<endl;
				}
				else if(othermaths_pd=="ave")
				{
					cout<<"    <������Ϣ>�����빲����ֵ"<<endl;
					cin>>aven;
					for(int avei=1;avei<=aven;avei++)
					{
						cin>>ave;
						avesum+=ave;
					}
					avesum=avesum/aven*1.0000;
					printf("%.4lf",avesum);
				}
				else if(othermaths_pd=="return"){
					cout<<"    <������Ϣ>�ѷ���"<<endl;
					break; 
				}
				else if(othermaths_pd=="place") cout<<"��ǰĿ¼������ѡ��Ŀ¼-������ѧ����"<<endl;
				else cout<<"    <������Ϣ>���ָ��ǲ���ָ��,��������return����������othermathshelp" <<endl; 
			}
			
		}
		else if(pd=="data")
		{
			cout<<"   <������Ϣ>����datahelp��ȡ����������return����,ֻ������ֵ����"<<endl;
			for(;;)
			{
				cin.sync();
				getline(cin,data_pd);
				if(data_pd=="return"){
					cout<<"   <������Ϣ>�ѷ���"<<endl; 
					break;
				}
				else if(data_pd=="in")
				{
					cout<<"   <������Ϣ>���������ݵĸ���"<<endl; 
					cin>>data_in_number;
					cout<<"   <������Ϣ>��������������"<<endl; 
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cin>>data[data_i];
					cout<<"   <������Ϣ>�������"<<endl;
				}
				else if(data_pd=="out"){
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cout<<data[data_i]<<" ";
					cout<<endl;
				}
				else if(data_pd=="sort")
				{
					cout<<"   <������Ϣ>����������ķ���A���������B����ݼ���,�����޸�����"<<endl;
					cin>>data_sort_fxpd;
					for(int data_i=1;data_i<=data_in_number;data_i++)
						sortsz[data_i]=data[data_i];//�������� 
					if(data_sort_fxpd=='A')
						fastsort(1,data_in_number,1);
					else if(data_sort_fxpd=='B')
						fastsort(1,data_in_number,2);
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cout<<sortsz[data_i]<<" ";
					cout<<endl;
					//if(ynpd='Y')
					//	for(int data_i=1;data_i<=data_in_number;data_i++)
					//		data[data_i]=sortsz[data_i];//�޸����� 
					memset(sortsz,0,sizeof(sortsz));//����������� 
				}
				else if(data_pd=="del"){
					cout<<"   <������Ϣ>ȷ��Ҫ��������е����������𣿴˲����������(Y/N)"<<endl;
					cin>>data_del_pd;
					if(data_del_pd=='Y'){
						memset(data,0,sizeof(data));
						cout<<"   <������Ϣ>������"<<endl;
					}
					else cout<<"   <������Ϣ>��ȡ�����"<<endl;
				}
				else if(data_pd=="datahelp")
					cout<<"------------------"<<endl<<"����in��������"<<endl<<"����out�������"<<endl<<"����sort��������"<<endl<<"����del�������"<<endl<<"����count��������������"<<endl;
				else if(data_pd=="count"){
					cout<<"   <������Ϣ>�������������(+-*/)�Լ�Ҫ�������,��+2,/4,�������е����ݽ����������㲢�޸�"<<endl;
					cin>>data_count_pd>>data_count_num;
					for(int i=1;i<=data_in_number;i++){
						if(data_count_pd=='+') data[i]+=data_count_num; 
						else if(data_count_pd=='-') data[i]-=data_count_num;
						else if(data_count_pd=='*') data[i]*=data_count_num;
						else if(data_count_pd=='/'&&data_count_num!=0) data[i]/=data_count_num;
							else cout<<"   <������Ϣ>���ܳ���0!"<<endl;
					}
					for(int i=1;i<=data_in_number;i++) cout<<data[i]<<" "; 
				}	
					
			}
		}
		else if(pd=="str") 
		{
			cout<<"    <������Ϣ>����strhelp��ȡ����������return����"<<endl;
			for(;;)
			{
				cout<<"    <������Ϣ>������Ҫ���еĲ���"<<endl;
				cin>>zfc_cz;
				if(zfc_cz=="in"){
					cout<<"    <������Ϣ>�������ַ���"<<endl;
					cin.sync();//�������� 
					getline(cin,str_zfc);
					cout<<"    <������Ϣ>�������" <<endl;
				}
				else if(zfc_cz=="strhelp")
				{
					cout<<"------------------"<<endl<<"����out����ַ���"<<endl<<"����insert�����ַ���"<<endl<<"����replace�滻�ַ���"<<endl<<"����append׷���ַ���"<<endl<<"����eraseɾ����ָ��λ�ÿ�ʼ��n���ַ�"<<endl;
					cout<<"����find�����ַ���"<<endl<<"����substr��ȡ�ַ���"<<endl<<"����size��ȡ����"<<endl<<"����inд���ַ���"<<endl<<"����del����ַ���"<<endl<<"����return����"; 
				}
				else if(zfc_cz=="size"){
					cout<<"    <������Ϣ>����������ʱ���һ��ǲ��Ҵ洢���ַ���(linshi/cunchu)"<<endl;
					cin>>str_size_lspd; 
					if(str_size_lspd=="cunchu") cout<<str_zfc.size();
					if(str_size_lspd=="linshi"){
						cout<<"    <������Ϣ>�������ַ���"<<endl;
						cin.sync();
						getline(cin,str_size_linshi); 
						cout<<str_size_linshi.size()<<endl; 
						
					}
				}
				else if(zfc_cz=="find"){
					cout<<"    <������Ϣ>������Ҫ���ҵ��ַ���"<<endl;
					cin.sync();
					getline(cin,str_find_str);
					if(str_zfc.find(str_find_str)>str_zfc.length())
						cout<<"    <������Ϣ>û�ҵ����ַ���" <<endl; 
					else cout<<str_zfc.find(str_find_str)<<endl;
				}
				else if(zfc_cz=="substr") 
				{
					cout<<"    <������Ϣ>�����뿪ʼλ�ú���ȡ����";
					cin>>subpos>>sublen;
					cout<<str_zfc.substr(subpos,sublen)<<endl; 
				}
				else if(zfc_cz=="out") cout<<str_zfc<<endl;
				else if(zfc_cz=="append"){
					cout<<"    <������Ϣ>������Ҫ׷�ӵ��ַ�"<<endl;
					cin.sync();
					getline(cin,str_zfc_append);
					str_zfc+=str_zfc_append;
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="erase"){
					cout<<"    <������Ϣ>����������￪ʼɾ����ɾ�����ٸ��ַ�"<<endl;
					cin>>str_erase_pos>>str_erase_len;
					str_zfc.erase(str_erase_pos,str_erase_len);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="insert")
				{
					cout<<"    <������Ϣ>����������������ַ���(ָ�ڼ����ַ�ǰ)"<<endl;
					cin>>str_insert_pos;
					cout<<"    <������Ϣ>�����������ַ���"<<endl;
					cin.sync();
					getline(cin,str_insert);
					str_zfc.insert(str_insert_pos,str_insert);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="replace")
				{
					cout<<"    <������Ϣ>�������滻��ָ��λ�ü�����"<<endl;
					cin>>str_replace_pos>>str_replace_len;
					cout<<"    <������Ϣ>������Ҫ�滻���ַ���"<<endl;
					cin.sync();
					getline(cin,str_replace);
					str_zfc.replace(str_replace_pos,str_replace_len,str_replace);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="del")
				{
					cout<<"    <������Ϣ>ȷ��Ҫ�����(Y/N)"<<endl;
					cin>>str_del_pd;
					if(str_del_pd=='Y'){
						str_zfc.erase(0,str_zfc.size());
						cout<<"    <������Ϣ>�����"<<endl;
					}
				}
				else if(zfc_cz=="return"){
					cout<<"    <������Ϣ>�ѷ���"<<endl;
					break; 
				} 
				else if(zfc_cz=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				else cout<<"    <������Ϣ>���ָ��ǲ���ָ��,��������return����������strhelp" <<endl; 
			}	
		}
		else if(pd=="wsploblem") {
			cout<<"    <������Ϣ>�����빲������"<<endl;
			cin>>wsN;
			cout<<(wsN*(wsN+1))/2;
		}
		else if(pd=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; 
		else if(pd=="ascll"){
			cout<<"    <������Ϣ>������Ҫת�����ַ�"<<endl;
			cin.sync();
			cin>>zf_ascll;
			cout<<int(zf_ascll);
		}
		else cout<<"    <������Ϣ> "<<pd<<" "<<"���ǲ���ָ������������help"<<endl; 
	}
	//24.12.26 ��bug 
	//24.12.31 ���������������������� 
	//25.2.7 �޸���str��find�޷�ʹ�õ�bug 
	//25.2.14 �Ƴ����ַ����������������������� 
	//25.2.15 ʹmaths�����ܹ�����򵥵ı��ʽ 
	//25.2.21 data�������������� 
}
