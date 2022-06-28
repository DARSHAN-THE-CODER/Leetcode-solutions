class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int space = 0;
        for(int i=0;i<sentences.size();i++)
        {
            int num=0;
            for(int j=0;j<sentences[i].length();j++)
            {
                if(sentences[i][j]==' ')
                    num++;
            }
            if(num>space)
                space=num;
        }
        return space+1;
    }
};