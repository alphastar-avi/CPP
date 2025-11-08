int main(){
    vector<int> arr = {1,4,2,7,3,8,1,9,1,2,4};
    for(int i = 0; i < arr.size() - 1; i++){
        int index = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for(int i : arr){
        cout << i << " ";
    }
}  