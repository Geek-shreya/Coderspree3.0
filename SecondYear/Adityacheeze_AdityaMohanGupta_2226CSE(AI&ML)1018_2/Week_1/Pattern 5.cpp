class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=n;i>0;i--){
	        for(int j=i;j>0;j--){
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
	}
};