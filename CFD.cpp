#include<bits/stdc++.h> 
using namespace std; 

struct  Node{ 
     Node* link[10]; 
    bool ends=false; 

    bool containsKey(int ch){ 
        return (link[ch]!=NULL); 
    } 
    void put(int ch,Node* n){ 
        link[ch]=n; 
    } 
    Node* get(int c){ 
        return link[c]; 
    } 
    void setEnd(){ends=true;} 
     
    bool isEnd(){return ends;} 
}; 


class Trie { 
public: 
    Node* head; 
    Trie() { 
        head=new Node(); 
    } 
     
    void insert(vector<int> word) { 
        Node* node=head; 
        for(int i=0;i<word.size();i++){ 
            if(node->containsKey(word[i])==0){ 
                Node* newnode=new Node(); 
                node->put(word[i],newnode); 
            } 
            node=node->get(word[i]); 
        } 
        node->setEnd(); 
    } 
     
    int search(vector<int> word) { 
        int ans=0; 
        Node* node=head; 
        for(int i=0;i<word.size();i++){ 
            if(node->containsKey(word[i])==0)
            return ans; 
            ans++; 
            node=node->get(word[i]); 
        } 
        return ans; 
    } 
}; 


void thrill(){ 
   int n,m; 
   cin>>n>>m; 
 vector<vector<int>>vec(n,vector<int>(m)); 
 vector<vector<int>> v;
for(int i=0;i<n;i++){ 
      for(int j=0;j<m;j++){ 
         cin>>vec[i][j]; 
         vec[i][j]--; 
      } 
   } 
   for(int i=0;i<n;i++){ 
    vector<int> v1(m); 
for(int j=0;j<m;j++){ 
         v1[vec[i][j]]=j; 
      }
      v.push_back(v1); 
   } 
Trie* trie=new Trie(); 

   for(int i=0;i<n;i++){ 
      trie->insert(v[i]); 
   } 
   for(int i=0;i<n;i++){ 
      int ans=trie->search(vec[i]); 
      cout<<ans<<" "; 
   } 
   cout<<endl; 


} 

int main(){ 
   int tc;
   cin>>tc;
   for(int i=0;i<tc;i++){ 
      thrill(); 
   } 

   return 0; 
}