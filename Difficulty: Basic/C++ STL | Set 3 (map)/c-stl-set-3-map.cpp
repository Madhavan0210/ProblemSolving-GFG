/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y) {
    // Your code here
     m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x) {
    
    // Your code here
     auto it=m.find(x);
  if(it!=m.end()){
      return it->second;
  }
  else{
      return -1;
  }
}

/* Prints contents of the map ie keys and values*/
    
void print_contents(map<int, int> &m) {
    // Your code here
      for(auto i:m){
       cout<<i.first<<" "<<i.second<<" ";
   }
}