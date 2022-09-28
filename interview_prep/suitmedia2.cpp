#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
#define fast\
  ios::sync_with_stdio(false); \
  cin.tie(NULL)

class Kamus
{
private:
  unordered_map<string, shared_ptr<unordered_set<string>>> kamus;
  void updateKamus(string, vector<string>);
public:
  Kamus();
  void tambah(string, vector<string>);
  vector<string> ambilSinonim(string);
};

Kamus::Kamus(/* args */ )
{
}

void Kamus::updateKamus(string kata, vector<string> listkata)
{
  for (auto sin : listkata)
  {
    if (kamus.find(sin) != kamus.end()) 
    {
      kamus[sin]->insert(kata);
    }
    else
    {
      kamus[sin] = shared_ptr<unordered_set<string>>(new unordered_set<string>({kata}));
    }
  }
}

void Kamus::tambah(string kata, vector<string> listkata)
{
  if (kamus.find(kata) == kamus.end())
  {
    shared_ptr<unordered_set<string>> sinonims(new unordered_set<string>(all(listkata)));
    kamus[kata] = sinonims; 
  }
  else
  {
    auto sinonims = kamus[kata];
    for (auto kata : listkata)
    {
      sinonims->insert(kata);
    }
  }
  updateKamus(kata, listkata);
}

vector<string> Kamus::ambilSinonim(string kata)
{
  vector<string> ret;
  if (kamus.find(kata) != kamus.end())
  {
    for (auto sin : *kamus[kata])
    {
      ret.push_back(sin);
    }
  }
  return ret;
}

int main() 
{
  fast;
  auto kamus = new Kamus();
  kamus->tambah("big", {"large", "great"});
  kamus->tambah("big", {"huge", "fat"});
  kamus->tambah("huge", {"enourmous", "gigantic"});
  
  vector<string> tc({"big", "huge", "gigantic", "colossal"});

  for (auto c : tc)
  {
    auto sins = kamus->ambilSinonim(c);
    cout << "Test case: "<< c << "\n";
    for (auto kata : sins)
    {
      cout << kata << "\n";
    }
    cout << endl;
  }
  

  return 0;
}