bool is_isomorphic(string input1, string input2)
{   
    if(input1.length() != input2.length()) return false;
    else {
        map<char, int> hm1;
        map<char, int> hm2;
        map<char, int>::iterator it1;
        map<char, int>::iterator it2;
        int val1;
        for(int i=0; i < input1.length(); i++){
            char c1 = input1.at(i);
            it1 = hm1.find(c1);
            if (it1 != hm1.end())
                it1->second += 1;
            else
                hm1.insert(pair<char,int>(c1, 1));
         
            char c2 = input2.at(i);
            it2 = hm2.find(c2);
            if (it2 != hm2.end())
                it2->second += 1;
            else
                hm2.insert(pair<char,int>(c2, 1));
            it1 = hm1.find(c1);
             it2 = hm2.find(c2);
            if(it1->second!= it2->second) return false;
        }
        return true;
    }
}