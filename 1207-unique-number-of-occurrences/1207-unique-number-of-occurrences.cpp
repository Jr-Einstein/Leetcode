
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> frequency;  // create an array to store the frequency of elements in array
        int i = 0 ;
        sort(arr.begin() , arr.end());
        int size = arr.size();

        while ( i < size ){
            int count = 0;
            for ( int j = i ; j < size ; j++){
                if (arr[i] == arr[j]){
                    count ++ ;
                }
                else{
                    break;
                }    
            }
            frequency.push_back(count);    //adding the frequencies to the frequency array
            i = i + count ;  // incrementing the counter by count number, to eveade encountering another same element that has already been counted
        }

        sort(frequency.begin() , frequency.end());
        size = frequency.size();

        for ( int i = 0 ; i < size-1 ; i++){
            if (frequency[i] == frequency[i+1]){
                return false;     //if the adjesent element is same that means that the occurence is not unique, so answer is false
            }
        }
        return true;
    }
};
