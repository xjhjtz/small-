#include<bits/stdc++.h>
using namespace std;
int main()
{
	int jcn,aven,paixu[9901],paixun,strpaixun,subpos,sublen;
	int strerasepos,streraselen,strinsertpos,strreplacepos,strreplacelen,c,d,wsN;
	long long jcsum=1;
	string pd,YunsuanPd,strpaixu[10000],strgrpd,strzfc="����һ�������ַ���",strfindstr,zfccz,strxgpd,strzfcappend,strinsert,strreplace,othermathspd,strsizelinshi,strsizelspd;
	double avesum=0,ave,a,b;
	char strdelpd,zf_ascll;
	cout<<"    <������Ϣ>����help��ȡ���� by xjhjtz0320"<<endl; 
	for(;;)//��ѭ�� 
	{
		cin>>pd;
		if(pd=="exit") return 0;//�������� 
		if(pd=="help")//���� 
		{
			cout<<"--------------------------------"<<endl;
			cout<<"������������maths" <<endl; 
			cout<<"������������othermaths"<<endl;
			cout<<"�ַ�����������str"<<endl; 
			cout<<"�ַ�����������strpaixu���ֵ���"<<endl; 
			cout<<"������������paixu����С����"<<endl; 
			cout<<"�˳�����exit"<<endl; 
			cout<<"������ʾ��������clean"<<endl;
			cout<<"ascll��ת������ascll"<<endl;
			cout<<endl;
		} 
		if(pd=="maths")//�������� 
		{
			cout<<"    <������Ϣ>������a,b"<<endl;
			cin>>a>>b;
			cout<<"    <������Ϣ>�������������"<<endl;
			cin>>YunsuanPd;
			if(YunsuanPd=="+") cout<<a+b;
			if(YunsuanPd=="-") cout<<a-b;
			if(YunsuanPd=="*") cout<<a*b;
			if(YunsuanPd=="/"&&b!=0) cout<<a/b;
				else if(YunsuanPd=="/"&&b==0) cout<<"    <������Ϣ>���ܳ���0��"<<endl; 
		}
		if(pd=="othermaths")//������ѧ���� 
		{
			cout<<"    <������Ϣ>�������������,��Ҫ��������othermathshelp,��������return"<<endl; 
			for(;;)
			{
				cin>>othermathspd;
				if(othermathspd=="othermathshelp"){
					cout<<"--------------------------------"<<endl<<"����pow����������"<<endl<<"����sprt������"<<endl<<"����abs�������ֵ"<<endl;
					cout<<"����%����ȡ��"<<endl<<"����ave��ƽ��ֵ����ȷ�����λ��"<<endl<<"����jc����׳�"<<endl;
				}
				else if(othermathspd=="pow")
				{
					cout<<"    <������Ϣ>�����������ָ��"<<endl;
					cin>>a>>b;
					cout<<pow(a,b);
				}
				else if(othermathspd=="sqrt"){
					cout<<"    <������Ϣ>������Ҫ��ƽ������"<<endl;
					cin>>a;
					cout<<sqrt(a)<<endl;
				}
				else if(othermathspd=="abs")
				{
					cout<<"    <������Ϣ>������Ҫ�����ֵ����"<<endl;
					cin>>a;
					cout<<abs(a)<<endl;
				}
				else if(othermathspd=="%"){cout<<"������a��aȡ�����b"<<endl;cin>>c>>d; cout<<c%d;}
				else if(othermathspd=="jc")
				{
					cout<<"    <������Ϣ>���������׳˵�n"<<endl; 
    				cin>>jcn;
    				for(int jci=1;jci<=jcn;jci++){
    				jcsum*=jci;
					}
    				cout<<jcsum<<endl;
				}
				else if(othermathspd=="ave")
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
				else if(othermathspd=="return"){
					cout<<"    <������Ϣ>�ѷ���"<<endl;
					break; 
				}
				else cout<<"    <������Ϣ>���ָ��ǲ���ָ��,��������return����������othermathshelp" <<endl; 
			}
			
		}
		if(pd=="paixu"){
			//�������� 
			cout<<"    <������Ϣ>������Ҫ���������(������9900)"<<endl;
			cin>>paixun;
			cout<<"    <������Ϣ>������Ҫ���������"<<endl;
			for(int paixui=1;paixui<=paixun;paixui++)
				cin>>paixu[paixui];
			for(int paixui=1;paixui<=paixun;paixui++)
				for(int paixuj=1;paixuj<=paixun-paixui;paixuj++)
					if(paixu[paixuj]>paixu[paixuj+1]) swap(paixu[paixuj],paixu[paixuj+1]);
			for(int paixui=1;paixui<=paixun;paixui++)
				cout<<endl<<paixu[paixui]<<endl;
		}
		if(pd=="strpaixu"){
			//�ַ������� 
			cout<<"    <������Ϣ>������Ҫ���������(������9900)"<<endl;
			cin>>strpaixun;
			cout<<"    <������Ϣ>������Ҫ���������"<<endl;
			for(int strpaixui=1;strpaixui<=strpaixun;strpaixui++)
				cin>>strpaixu[strpaixui];
			for(int strpaixui=1;strpaixui<=strpaixun;strpaixui++)
				for(int strpaixuj=1;strpaixuj<=strpaixun-strpaixui;strpaixuj++)
					if(strpaixu[strpaixuj]>strpaixu[strpaixuj+1]) swap(strpaixu[strpaixuj],strpaixu[strpaixuj+1]);
			for(int strpaixui=1;strpaixui<=strpaixun;strpaixui++)
				cout<<endl<<strpaixu[strpaixui]<<endl;
		}
		if(pd=="str") 
		{
			cout<<"    <������Ϣ>����strhelp��ȡ����������return����"<<endl;
			for(;;)
			{
				cout<<"    <������Ϣ>������Ҫ���еĲ���"<<endl;
				cin>>zfccz;
				if(zfccz=="in"){
					cout<<"    <������Ϣ>�������ַ���"<<endl;
					cin.sync();//�������� 
					getline(cin,strzfc);
					cout<<"    <������Ϣ>�������" <<endl;
				}
				else if(zfccz=="strhelp")
				{
					cout<<"------------------"<<endl<<"����out����ַ���"<<endl<<"����insert�����ַ���"<<endl<<"����replace�滻�ַ���"<<endl<<"����append׷���ַ���"<<endl<<"����eraseɾ����ָ��λ�ÿ�ʼ��n���ַ�"<<endl;
					cout<<"����find�����ַ���"<<endl<<"����substr��ȡ�ַ���"<<endl<<"����size��ȡ����"<<endl<<"����inд���ַ���"<<endl<<"����del����ַ���"<<endl<<"����return����"; 
				}
				else if(zfccz=="size"){
					cout<<"    <������Ϣ>����������ʱ���һ��ǲ��Ҵ洢���ַ���(linshi/cunchu)"<<endl;
					cin>>strsizelspd; 
					if(strsizelspd=="cunchu") cout<<strzfc.size();
					if(strsizelspd=="linshi"){
						cout<<"    <������Ϣ>�������ַ���"<<endl;
						cin.sync();
						getline(cin,strsizelinshi); 
						cout<<strsizelinshi.size()<<endl; 
						
					}
				}
				else if(zfccz=="find"){
					cout<<"    <������Ϣ>������Ҫ���ҵ��ַ���"<<endl;
					getline(cin,strfindstr);
					if(strzfc.find(strfindstr)>strzfc.length())
						cout<<"    <������Ϣ>û�ҵ����ַ���" <<endl; 
					else cout<<strzfc.find(strfindstr)<<endl;
				}
				else if(zfccz=="substr") 
				{
					cout<<"    <������Ϣ>�����뿪ʼλ�ú���ȡ����";
					cin>>subpos>>sublen;
					cout<<strzfc.substr(subpos,sublen)<<endl; 
				}
				else if(zfccz=="out") cout<<strzfc<<endl;
				else if(zfccz=="append"){
					cout<<"    <������Ϣ>������Ҫ׷�ӵ��ַ�"<<endl;
					cin.sync();
					getline(cin,strzfcappend);
					strzfc+=strzfcappend;
					cout<<strzfc<<endl;
				}
				else if(zfccz=="erase"){
					cout<<"    <������Ϣ>����������￪ʼɾ����ɾ�����ٸ��ַ�"<<endl;
					cin>>strerasepos>>streraselen;
					strzfc.erase(strerasepos,streraselen);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="insert")
				{
					cout<<"    <������Ϣ>����������������ַ���(ָ�ڼ����ַ�ǰ)"<<endl;
					cin>>strinsertpos;
					cout<<"    <������Ϣ>�����������ַ���"<<endl;
					cin.sync();
					getline(cin,strinsert);
					strzfc.insert(strinsertpos,strinsert);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="replace")
				{
					cout<<"    <������Ϣ>�������滻��ָ��λ�ü�����"<<endl;
					cin>>strreplacepos>>strreplacelen;
					cout<<"    <������Ϣ>������Ҫ�滻���ַ���"<<endl;
					cin.sync();
					getline(cin,strreplace);
					strzfc.replace(strreplacepos,strreplacelen,strreplace);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="del")
				{
					cout<<"    <������Ϣ>ȷ��Ҫ�����(Y/N)"<<endl;
					cin>>strdelpd;
					if(strdelpd=='Y'){
						strzfc.erase(0,strzfc.size());
						cout<<"    <������Ϣ>�����"<<endl;
					}
				}
				else if(zfccz=="return"){
					cout<<"    <������Ϣ>�ѷ���"<<endl;
					break; 
				} 
				else if(zfccz=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				else cout<<"    <������Ϣ>���ָ��ǲ���ָ��,��������return����������strhelp" <<endl; 
			}	
		}
		if(pd=="wsploblem") {
			cout<<"    <������Ϣ>�����빲������"<<endl;
			cin>>wsN;
			cout<<(wsN*(wsN+1))/2;
		}
		if(pd=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; 
		if(pd=="ascll"){
			cout<<"    <������Ϣ>������Ҫת�����ַ�"<<endl;
			cin.sync();
			cin>>zf_ascll;
			cout<<int(zf_ascll);
		}
	}
	//24.12.26 ��bug 
	//24.12.31 ���������������������� 
}
