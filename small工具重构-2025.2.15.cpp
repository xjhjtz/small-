#include<bits/stdc++.h>
using namespace std;
double sortsz[100000],data[9901];
int data_in_number;
void fastsort(int l,int r,int p)
{//正序 
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
	string pd,strpaixu[10000],str_gr_pd,str_zfc="这是一个测试字符串",str_find_str,zfc_cz,data_pd;
	string str_xg_pd,str_zfc_append,str_insert,str_replace,othermaths_pd,str_size_linshi,str_size_lspd;
	double avesum=0,ave,a,b,data_count_num;
	char str_del_pd,zf_ascll,data_sort_fxpd,data_del_pd,YunsuanPd,ynpd,data_count_pd;
	cout<<"    <程序信息>输入help获取帮助 by xjhjtz0320"<<endl; 
	for(;;)//死循环   
	{
		cin>>pd;
		if(pd=="exit") return 0;//结束程序 
		else if(pd=="help")//帮助 
		{
			cout<<"--------------------------------"<<endl;
			cout<<"四则运算输入maths" <<endl; 
			cout<<"其他运算输入othermaths"<<endl;
			cout<<"字符串操作输入str"<<endl; 
			//cout<<"字符串排序输入strpaixu（字典序）"<<endl; 
			cout<<"数值批量操作输入data(原排序功能在这里)"<<endl; 
			cout<<"数字排序输入paixu（由小到大）"<<endl; 
			cout<<"退出输入exit"<<endl; 
			cout<<"清理显示区域输入clean"<<endl;
			cout<<"ascll码转换输入ascll"<<endl;
			cout<<endl;
		} 
		else if(pd=="place") cout<<"当前目录：功能选择目录"<<endl; 
		else if(pd=="maths")//四则运算 
		{
			cout<<"    <程序信息>请输入表达式（当前仅支持例如3+1,4-2,7*3,8/2这种式子，输入样例:3+2)"<<endl;
			cout<<"    <程序信息>计算完一次后将退出!"<<endl;
			cin>>a>>YunsuanPd>>b;
			if(YunsuanPd=='+') cout<<a+b;
			if(YunsuanPd=='-') cout<<a-b;
			if(YunsuanPd=='*') cout<<a*b;
			if(YunsuanPd=='/'&&b!=0) cout<<a/b;
				else if(YunsuanPd=='/'&&b==0) cout<<"    <程序信息>不能除以0！"<<endl;  
			
		}
		else if(pd=="othermaths")//其他数学运算 
		{
			cout<<"    <程序信息>请输入运算操作,需要帮助输入othermathshelp,返回输入return"<<endl; 
			for(;;)
			{
				cin>>othermaths_pd;
				if(othermaths_pd=="othermathshelp"){
					cout<<"--------------------------------"<<endl<<"输入pow进行幂运算"<<endl<<"输入sprt开根号"<<endl<<"输入abs计算绝对值"<<endl;
					cout<<"输入%进行取余"<<endl<<"输入ave求平均值（精确到万分位）"<<endl<<"输入jc计算阶乘"<<endl;
				}
				else if(othermaths_pd=="pow")
				{
					cout<<"    <程序信息>请输入底数和指数"<<endl;
					cin>>a>>b;
					cout<<pow(a,b);
				}
				else if(othermaths_pd=="sqrt"){
					cout<<"    <程序信息>请输入要开平方的数"<<endl;
					cin>>a;
					cout<<sqrt(a)<<endl;
				}
				else if(othermaths_pd=="abs")
				{
					cout<<"    <程序信息>请输入要算绝对值的数"<<endl;
					cin>>a;
					cout<<abs(a)<<endl;
				}
				else if(othermaths_pd=="%"){cout<<"请输入a和a取余的数b"<<endl;cin>>c>>d; cout<<c%d;}
				else if(othermaths_pd=="jc")
				{
					cout<<"    <程序信息>请输入计算阶乘的n"<<endl; 
    				cin>>jcn;
    				for(int jci=1;jci<=jcn;jci++){
    				jcsum*=jci;
					}
    				cout<<jcsum<<endl;
				}
				else if(othermaths_pd=="ave")
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
				else if(othermaths_pd=="return"){
					cout<<"    <程序信息>已返回"<<endl;
					break; 
				}
				else if(othermaths_pd=="place") cout<<"当前目录：功能选择目录-其他数学运算"<<endl;
				else cout<<"    <程序信息>这个指令不是操作指令,返回输入return，帮助请输othermathshelp" <<endl; 
			}
			
		}
		else if(pd=="data")
		{
			cout<<"   <程序信息>输入datahelp获取帮助，输入return返回,只处理数值数据"<<endl;
			for(;;)
			{
				cin.sync();
				getline(cin,data_pd);
				if(data_pd=="return"){
					cout<<"   <程序信息>已返回"<<endl; 
					break;
				}
				else if(data_pd=="in")
				{
					cout<<"   <程序信息>请输入数据的个数"<<endl; 
					cin>>data_in_number;
					cout<<"   <程序信息>请依次输入数据"<<endl; 
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cin>>data[data_i];
					cout<<"   <程序信息>输入完成"<<endl;
				}
				else if(data_pd=="out"){
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cout<<data[data_i]<<" ";
					cout<<endl;
				}
				else if(data_pd=="sort")
				{
					cout<<"   <程序信息>请输入排序的方向（A代表递增，B代表递减）,不会修改数据"<<endl;
					cin>>data_sort_fxpd;
					for(int data_i=1;data_i<=data_in_number;data_i++)
						sortsz[data_i]=data[data_i];//隔离数据 
					if(data_sort_fxpd=='A')
						fastsort(1,data_in_number,1);
					else if(data_sort_fxpd=='B')
						fastsort(1,data_in_number,2);
					for(int data_i=1;data_i<=data_in_number;data_i++)
						cout<<sortsz[data_i]<<" ";
					cout<<endl;
					//if(ynpd='Y')
					//	for(int data_i=1;data_i<=data_in_number;data_i++)
					//		data[data_i]=sortsz[data_i];//修改数据 
					memset(sortsz,0,sizeof(sortsz));//清空排序数组 
				}
				else if(data_pd=="del"){
					cout<<"   <程序信息>确定要清空数组中的所有数据吗？此操作不可挽回(Y/N)"<<endl;
					cin>>data_del_pd;
					if(data_del_pd=='Y'){
						memset(data,0,sizeof(data));
						cout<<"   <程序信息>清空完成"<<endl;
					}
					else cout<<"   <程序信息>已取消清空"<<endl;
				}
				else if(data_pd=="datahelp")
					cout<<"------------------"<<endl<<"输入in输入数据"<<endl<<"输入out输出数据"<<endl<<"输入sort排序数据"<<endl<<"输入del清空数组"<<endl<<"输入count进行数据批处理"<<endl;
				else if(data_pd=="count"){
					cout<<"   <程序信息>请输入运算符号(+-*/)以及要运算的数,如+2,/4,将对所有的数据进行批量计算并修改"<<endl;
					cin>>data_count_pd>>data_count_num;
					for(int i=1;i<=data_in_number;i++){
						if(data_count_pd=='+') data[i]+=data_count_num; 
						else if(data_count_pd=='-') data[i]-=data_count_num;
						else if(data_count_pd=='*') data[i]*=data_count_num;
						else if(data_count_pd=='/'&&data_count_num!=0) data[i]/=data_count_num;
							else cout<<"   <程序信息>不能除以0!"<<endl;
					}
					for(int i=1;i<=data_in_number;i++) cout<<data[i]<<" "; 
				}	
					
			}
		}
		else if(pd=="str") 
		{
			cout<<"    <程序信息>输入strhelp获取帮助，输入return返回"<<endl;
			for(;;)
			{
				cout<<"    <程序信息>请输入要进行的操作"<<endl;
				cin>>zfc_cz;
				if(zfc_cz=="in"){
					cout<<"    <程序信息>请输入字符串"<<endl;
					cin.sync();//清理缓冲区 
					getline(cin,str_zfc);
					cout<<"    <程序信息>读入完成" <<endl;
				}
				else if(zfc_cz=="strhelp")
				{
					cout<<"------------------"<<endl<<"输入out输出字符串"<<endl<<"输入insert插入字符串"<<endl<<"输入replace替换字符串"<<endl<<"输入append追加字符串"<<endl<<"输入erase删除从指定位置开始的n个字符"<<endl;
					cout<<"输入find查找字符串"<<endl<<"输入substr提取字符串"<<endl<<"输入size获取长度"<<endl<<"输入in写入字符串"<<endl<<"输入del清空字符串"<<endl<<"输入return返回"; 
				}
				else if(zfc_cz=="size"){
					cout<<"    <程序信息>请输入是临时查找还是查找存储的字符串(linshi/cunchu)"<<endl;
					cin>>str_size_lspd; 
					if(str_size_lspd=="cunchu") cout<<str_zfc.size();
					if(str_size_lspd=="linshi"){
						cout<<"    <程序信息>请输入字符串"<<endl;
						cin.sync();
						getline(cin,str_size_linshi); 
						cout<<str_size_linshi.size()<<endl; 
						
					}
				}
				else if(zfc_cz=="find"){
					cout<<"    <程序信息>请输入要查找的字符串"<<endl;
					cin.sync();
					getline(cin,str_find_str);
					if(str_zfc.find(str_find_str)>str_zfc.length())
						cout<<"    <程序信息>没找到该字符串" <<endl; 
					else cout<<str_zfc.find(str_find_str)<<endl;
				}
				else if(zfc_cz=="substr") 
				{
					cout<<"    <程序信息>请输入开始位置和提取长度";
					cin>>subpos>>sublen;
					cout<<str_zfc.substr(subpos,sublen)<<endl; 
				}
				else if(zfc_cz=="out") cout<<str_zfc<<endl;
				else if(zfc_cz=="append"){
					cout<<"    <程序信息>请输入要追加的字符"<<endl;
					cin.sync();
					getline(cin,str_zfc_append);
					str_zfc+=str_zfc_append;
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="erase"){
					cout<<"    <程序信息>请输入从哪里开始删除和删除多少个字符"<<endl;
					cin>>str_erase_pos>>str_erase_len;
					str_zfc.erase(str_erase_pos,str_erase_len);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="insert")
				{
					cout<<"    <程序信息>请输入在哪里插入字符串(指第几个字符前)"<<endl;
					cin>>str_insert_pos;
					cout<<"    <程序信息>请输入插入的字符串"<<endl;
					cin.sync();
					getline(cin,str_insert);
					str_zfc.insert(str_insert_pos,str_insert);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="replace")
				{
					cout<<"    <程序信息>请输入替换的指定位置及长度"<<endl;
					cin>>str_replace_pos>>str_replace_len;
					cout<<"    <程序信息>请输入要替换的字符串"<<endl;
					cin.sync();
					getline(cin,str_replace);
					str_zfc.replace(str_replace_pos,str_replace_len,str_replace);
					cout<<str_zfc<<endl;
				}
				else if(zfc_cz=="del")
				{
					cout<<"    <程序信息>确定要清空吗(Y/N)"<<endl;
					cin>>str_del_pd;
					if(str_del_pd=='Y'){
						str_zfc.erase(0,str_zfc.size());
						cout<<"    <程序信息>已清空"<<endl;
					}
				}
				else if(zfc_cz=="return"){
					cout<<"    <程序信息>已返回"<<endl;
					break; 
				} 
				else if(zfc_cz=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				else cout<<"    <程序信息>这个指令不是操作指令,返回输入return，帮助请输strhelp" <<endl; 
			}	
		}
		else if(pd=="wsploblem") {
			cout<<"    <程序信息>请输入共几个人"<<endl;
			cin>>wsN;
			cout<<(wsN*(wsN+1))/2;
		}
		else if(pd=="clean")  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; 
		else if(pd=="ascll"){
			cout<<"    <程序信息>请输入要转换的字符"<<endl;
			cin.sync();
			cin>>zf_ascll;
			cout<<int(zf_ascll);
		}
		else cout<<"    <程序信息> "<<pd<<" "<<"不是操作指令，如需帮助输入help"<<endl; 
	}
	//24.12.26 改bug 
	//24.12.31 加入清屏和握手问题解决器 
	//25.2.7 修复了str中find无法使用的bug 
	//25.2.14 移除了字符串排序，新增数据批处理板块 
	//25.2.15 使maths功能能够处理简单的表达式 
	//25.2.21 data新增数据批处理 
}
