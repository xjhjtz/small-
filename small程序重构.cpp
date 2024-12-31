#include<bits/stdc++.h>
using namespace std;
int main()
{
	int jcn,aven,paixu[9901],paixun,strpaixun,subpos,sublen;
	int strerasepos,streraselen,strinsertpos,strreplacepos,strreplacelen,c,d,wsN;
	long long jcsum=1;
	string pd,YunsuanPd,strpaixu[10000],strgrpd,strzfc="这是一个测试字符串",strfindstr,zfccz,strxgpd,strzfcappend,strinsert,strreplace,othermathspd,strsizelinshi,strsizelspd;
	double avesum=0,ave,a,b;
	char strdelpd,zf_ascll;
	cout<<"    <程序信息>输入help获取帮助 by xjhjtz0320"<<endl; 
	for(;;)//死循环 
	{
		cin>>pd;
		if(pd=="exit") return 0;//结束程序 
		if(pd=="help")//帮助 
		{
			cout<<"--------------------------------"<<endl;
			cout<<"四则运算输入maths" <<endl; 
			cout<<"其他运算输入othermaths"<<endl;
			cout<<"字符串操作输入str"<<endl; 
			cout<<"字符串排序输入strpaixu（字典序）"<<endl; 
			cout<<"数字排序输入paixu（由小到大）"<<endl; 
			cout<<"退出输入exit"<<endl; 
			cout<<"清理显示区域输入clean"<<endl;
			cout<<"ascll码转换输入ascll"<<endl;
			cout<<endl;
		} 
		if(pd=="maths")//四则运算 
		{
			cout<<"    <程序信息>请输入a,b"<<endl;
			cin>>a>>b;
			cout<<"    <程序信息>请输入运算符号"<<endl;
			cin>>YunsuanPd;
			if(YunsuanPd=="+") cout<<a+b;
			if(YunsuanPd=="-") cout<<a-b;
			if(YunsuanPd=="*") cout<<a*b;
			if(YunsuanPd=="/"&&b!=0) cout<<a/b;
				else if(YunsuanPd=="/"&&b==0) cout<<"    <程序信息>不能除以0！"<<endl; 
		}
		if(pd=="othermaths")//其他数学运算 
		{
			cout<<"    <程序信息>请输入运算操作,需要帮助输入othermathshelp,返回输入return"<<endl; 
			for(;;)
			{
				cin>>othermathspd;
				if(othermathspd=="othermathshelp"){
					cout<<"--------------------------------"<<endl<<"输入pow进行幂运算"<<endl<<"输入sprt开根号"<<endl<<"输入abs计算绝对值"<<endl;
					cout<<"输入%进行取余"<<endl<<"输入ave求平均值（精确到万分位）"<<endl<<"输入jc计算阶乘"<<endl;
				}
				else if(othermathspd=="pow")
				{
					cout<<"    <程序信息>请输入底数和指数"<<endl;
					cin>>a>>b;
					cout<<pow(a,b);
				}
				else if(othermathspd=="sqrt"){
					cout<<"    <程序信息>请输入要开平方的数"<<endl;
					cin>>a;
					cout<<sqrt(a)<<endl;
				}
				else if(othermathspd=="abs")
				{
					cout<<"    <程序信息>请输入要算绝对值的数"<<endl;
					cin>>a;
					cout<<abs(a)<<endl;
				}
				else if(othermathspd=="%"){cout<<"请输入a和a取余的数b"<<endl;cin>>c>>d; cout<<c%d;}
				else if(othermathspd=="jc")
				{
					cout<<"    <程序信息>请输入计算阶乘的n"<<endl; 
    				cin>>jcn;
    				for(int jci=1;jci<=jcn;jci++){
    				jcsum*=jci;
					}
    				cout<<jcsum<<endl;
				}
				else if(othermathspd=="ave")
				{
					cout<<"    <程序信息>请输入共几个值"<<endl;
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
					cout<<"    <程序信息>已返回"<<endl;
					break; 
				}
				else cout<<"    <程序信息>这个指令不是操作指令,返回输入return，帮助请输othermathshelp" <<endl; 
			}
			
		}
		if(pd=="paixu"){
			//数字排序 
			cout<<"    <程序信息>请输入要排序的数量(不大于9900)"<<endl;
			cin>>paixun;
			cout<<"    <程序信息>请输入要排序的内容"<<endl;
			for(int paixui=1;paixui<=paixun;paixui++)
				cin>>paixu[paixui];
			for(int paixui=1;paixui<=paixun;paixui++)
				for(int paixuj=1;paixuj<=paixun-paixui;paixuj++)
					if(paixu[paixuj]>paixu[paixuj+1]) swap(paixu[paixuj],paixu[paixuj+1]);
			for(int paixui=1;paixui<=paixun;paixui++)
				cout<<endl<<paixu[paixui]<<endl;
		}
		if(pd=="strpaixu"){
			//字符串排序 
			cout<<"    <程序信息>请输入要排序的数量(不大于9900)"<<endl;
			cin>>strpaixun;
			cout<<"    <程序信息>请输入要排序的内容"<<endl;
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
			cout<<"    <程序信息>输入strhelp获取帮助，输入return返回"<<endl;
			for(;;)
			{
				cout<<"    <程序信息>请输入要进行的操作"<<endl;
				cin>>zfccz;
				if(zfccz=="in"){
					cout<<"    <程序信息>请输入字符串"<<endl;
					cin.sync();//清理缓冲区 
					getline(cin,strzfc);
					cout<<"    <程序信息>读入完成" <<endl;
				}
				else if(zfccz=="strhelp")
				{
					cout<<"------------------"<<endl<<"输入out输出字符串"<<endl<<"输入insert插入字符串"<<endl<<"输入replace替换字符串"<<endl<<"输入append追加字符串"<<endl<<"输入erase删除从指定位置开始的n个字符"<<endl;
					cout<<"输入find查找字符串"<<endl<<"输入substr提取字符串"<<endl<<"输入size获取长度"<<endl<<"输入in写入字符串"<<endl<<"输入del清空字符串"<<endl<<"输入return返回"; 
				}
				else if(zfccz=="size"){
					cout<<"    <程序信息>请输入是临时查找还是查找存储的字符串(linshi/cunchu)"<<endl;
					cin>>strsizelspd; 
					if(strsizelspd=="cunchu") cout<<strzfc.size();
					if(strsizelspd=="linshi"){
						cout<<"    <程序信息>请输入字符串"<<endl;
						cin.sync();
						getline(cin,strsizelinshi); 
						cout<<strsizelinshi.size()<<endl; 
						
					}
				}
				else if(zfccz=="find"){
					cout<<"    <程序信息>请输入要查找的字符串"<<endl;
					getline(cin,strfindstr);
					if(strzfc.find(strfindstr)>strzfc.length())
						cout<<"    <程序信息>没找到该字符串" <<endl; 
					else cout<<strzfc.find(strfindstr)<<endl;
				}
				else if(zfccz=="substr") 
				{
					cout<<"    <程序信息>请输入开始位置和提取长度";
					cin>>subpos>>sublen;
					cout<<strzfc.substr(subpos,sublen)<<endl; 
				}
				else if(zfccz=="out") cout<<strzfc<<endl;
				else if(zfccz=="append"){
					cout<<"    <程序信息>请输入要追加的字符"<<endl;
					cin.sync();
					getline(cin,strzfcappend);
					strzfc+=strzfcappend;
					cout<<strzfc<<endl;
				}
				else if(zfccz=="erase"){
					cout<<"    <程序信息>请输入从哪里开始删除和删除多少个字符"<<endl;
					cin>>strerasepos>>streraselen;
					strzfc.erase(strerasepos,streraselen);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="insert")
				{
					cout<<"    <程序信息>请输入在哪里插入字符串(指第几个字符前)"<<endl;
					cin>>strinsertpos;
					cout<<"    <程序信息>请输入插入的字符串"<<endl;
					cin.sync();
					getline(cin,strinsert);
					strzfc.insert(strinsertpos,strinsert);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="replace")
				{
					cout<<"    <程序信息>请输入替换的指定位置及长度"<<endl;
					cin>>strreplacepos>>strreplacelen;
					cout<<"    <程序信息>请输入要替换的字符串"<<endl;
					cin.sync();
					getline(cin,strreplace);
					strzfc.replace(strreplacepos,strreplacelen,strreplace);
					cout<<strzfc<<endl;
				}
				else if(zfccz=="del")
				{
					cout<<"    <程序信息>确定要清空吗(Y/N)"<<endl;
					cin>>strdelpd;
					if(strdelpd=='Y'){
						strzfc.erase(0,strzfc.size());
						cout<<"    <程序信息>已清空"<<endl;
					}
				}
				else if(zfccz=="return"){
					cout<<"    <程序信息>已返回"<<endl;
					break; 
				} 
				else if(zfccz=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				else cout<<"    <程序信息>这个指令不是操作指令,返回输入return，帮助请输strhelp" <<endl; 
			}	
		}
		if(pd=="wsploblem") {
			cout<<"    <程序信息>请输入共几个人"<<endl;
			cin>>wsN;
			cout<<(wsN*(wsN+1))/2;
		}
		if(pd=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; 
		if(pd=="ascll"){
			cout<<"    <程序信息>请输入要转换的字符"<<endl;
			cin.sync();
			cin>>zf_ascll;
			cout<<int(zf_ascll);
		}
	}
	//24.12.26 改bug 
	//24.12.31 加入清屏和握手问题解决器 
}
