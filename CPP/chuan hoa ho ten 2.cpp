#include <iostream>
#include <string>
#include <vector>
using namespace std;
int count=0;
vector<string> ChuanHoa(string s){
    vector<string> word;
    string w;
    int start=0;
    s=' '+s+' ';
    for(int i=0;i<s.length();i++){
      if(s[i]>='A'&&s[i]<='Z'){
        s[i]+=32;
      }
    }
    for(int i=1;i<s.length()-1;i++){
        if((s[i-1]==' ')&&(s[i]!=' ')){
            start = i;
        }
        if((s[i]!=' ')&&(s[i+1]==' ')){
            w=s.substr(start,i-start+1);
            w[0]-=32;
            word.push_back(w);
            count++;
        }
    }
  return word;
}
void cach1(vector<string> s){
  cout<<s[count-1];
  for(int i=0;i<count-1;i++){
    cout<<" "<<s[i];
  }
  cout<<endl;
}
void cach2(vector<string> s){
  for(int i=1;i<count;i++){
    cout<<s[i]<<" ";
  }
  cout<<s[0]<<endl;
}
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				int n,a[100];
    cin>>n;
    cin.ignore();
    string s[1000];
    for(int i=0;i<n;i++){
    cin>>a[i];
    cin.ignore();
    getline(cin,s[i]);
    }
    vector<string> words;
    for(int i=0;i<n;i++){
      words=ChuanHoa(s[i]);
      if(a[i]==1){
        cach1(words);
      }else{
        cach2(words);
      }
      words.erase(words.begin() , words.begin() +count);
      count=0;
    }
   
			}
	}
