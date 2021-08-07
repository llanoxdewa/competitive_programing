// template debug
#define LANO_DEBUG
#define debug(x) cerr << #x << " -> ";_print(x);cerr << endl;
#define debugArr(x,y) cerr << #x << " -> ";_print(x,y);cerr << endl;

// debug all
template<typename... Args>void _print(Args... args){
	(cerr << ... << args);
}
// debug value
template<typename T> void _print(T arg){cerr << arg << " ";}
// debug vector
template<typename V> void _print(vector<V> arg){cerr << "[ ";for(V bil : arg) cerr << bil << " | ";cerr << "]";}
// debug map
template<typename K,typename V> void _print(map<K,V> arg){cerr << "{ ";for(auto &val : arg) cerr << val.first << " => " << val.second << " | ";cerr << "}";}
// debug array[]
template<typename A> void _print(A args[],int len){cerr << "[ ";for(int i = 0;i < len;i++)cerr << args[i] << " | ";cerr << "]";}
// debug set
template<typename S> void _print(set<S> argset){cerr << "[ ";for(S val : argset)cerr << val << " => "; cerr << "]";}
