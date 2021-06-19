
void sort(vector<int> &vec,bool reverse = false){
	int index = 0;
	if(!reverse){	
		for(int i=0;i < vec.size();i++){
			for(int j=index;j < vec.size();j++){
				if(vec[j] < vec[index])
					swap(vec[j],vec[index]);
			}
			index++;	
		}
	} else { 
		for(int i=0;i < vec.size();i++){
			for(int j=0;j < vec.size();j++){
				if(vec[j] < vec[index])
					swap(vec[j],vec[index]);
			}
			index++;	
		}
	}
}

vector<int> sorted(vector<int> vec,bool reverse = false){
	int index = 0;
	if(!reverse){	
		for(int i=0;i < vec.size();i++){
			for(int j=index;j < vec.size();j++){
				if(vec[j] < vec[index])
					swap(vec[j],vec[index]);
			}
			index++;	
		}
	} else { 
		for(int i=0;i < vec.size();i++){
			for(int j=0;j < vec.size();j++){
				if(vec[j] < vec[index])
					swap(vec[j],vec[index]);
			}
			index++;	
		}
	}
	return vec;
}


int max(vector<int> vec){
	int mx = vec[0];
	for(int bil : vec)
		if(bil > mx)
			mx = bil;
	return mx;
}

int min(vector<int> vec){
	int mn = vec[0];
	for(int bil : vec)
		if(bil < mn)
			mn = bil;
	return mn;
}





template<class arr,class T>
int count(arr vec,T target){
	int jmlh = 0;
	for(int i = 0;i < vec.size();i++){
		if(vec[i]==target){
			jmlh++;	
		}
	}
	return jmlh;
}



int sama(vector<int> A,vector<int> B){
	for(int i = 0;i < A.size();i++){
		if(A[i]==B[i])
			continue;
		return false;
	}
	return true; 
}

template<typename T,typename S>
int in(T arr,S target){
	for(auto v : arr)
		if(v == target)
			return true;
	return false;
}


// input must vector
template<typename T>
auto reverse(T arr){
	T newarr = {};
	for(int i = arr.size() - 1;i >= 0;i--)
		newarr.push_back(arr[i]);
	return newarr;
}

template<typename T>
int sz(T iter){
	int size = 0;
	while(iter[size])
		size++;
	return size;
}


vector<string> split(string S,char sep){
	vector<string> vstr;

	vector<int> seps;
	int jejak = 0;
	for(int i = 0;i < S.size();i++){
		if(S[i] =! sep)
			jejak++;
		else{
			seps.push_back(jejak);	
			jejak = 0;
		} 

		
	}
	int b = 0;
	for(int sep : seps){
		vstr.push_back(S.substr(b,sep));
		b = sep;
	}
	return vstr;
}

vector<int> splitToInt(string str){
	str += ".";
	stringstream S(str);
	vector<int> hasil;
	while(true){
		int bil;
		char sep;
		S >> bil >> sep;
		hasil.push_back(bil);
		if(sep == '.') break;		
	}
	return hasil; 
}




