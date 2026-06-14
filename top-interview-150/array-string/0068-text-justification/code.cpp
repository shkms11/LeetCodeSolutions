class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<int>wordsLength;
        for(auto& x : words){
             wordsLength.push_back((int)x.size());
        }
        vector<vector<int>> resultIndex;
        vector<int>remainWidth;
        vector<int>totalWordsInALine;
        for(int i=0; i<(int)words.size(); i++){

          int ccMaxWidth = maxWidth - wordsLength[i];
          vector<int>ccLine;
          ccLine.push_back(i);
          
          int count =1;
          for( int j=i+1; j<(int)words.size() && ccMaxWidth > 0; j++)
          {
            
           ccMaxWidth-= wordsLength[j] +1 ;
           if(ccMaxWidth>=0){
              ccLine.push_back(j);
              count++;
              i = j;
              if(!ccMaxWidth) break;
           }
           else {
             //remain space after a word and a space for two and for a space folllowing each
             ccMaxWidth += wordsLength[j] +1;
             j--;
             break;
           }

           i =j;

          }
          
          resultIndex.push_back(ccLine);
          remainWidth.push_back(ccMaxWidth);
          totalWordsInALine.push_back(count);
        }

        vector <string>outputR;
        int i =0;
        for(; i<(int)resultIndex.size() - 1; i++){
          vector<int> ccLine = resultIndex[i];
          string s;

            s= words[ccLine[0]];
            int extraSpace = 1; 
            int lfSpace = 0;
            
            if(totalWordsInALine[i]>1){
             extraSpace = remainWidth[i]/(totalWordsInALine[i]-1);
             lfSpace = remainWidth[i]%(totalWordsInALine[i] - 1);
            
            }

            



          for(int j=1; j<(int)ccLine.size(); j++){

            s.append(extraSpace+1, ' '); 
            if(lfSpace){
              s+= ' ';
              lfSpace--;
            }
            s+= words[ccLine[j]];
          }
          if(totalWordsInALine[i] == 1){
            s.append(remainWidth[i],' ');
          }
          outputR.push_back(s);
        } 

vector<int> ccLine = resultIndex[i];
          string s;
          int totalSpace = remainWidth[i];
          s+= words[ccLine[0]];
          
          for(int k=1; k<(int)ccLine.size(); k++){
            s+= ' ';
            s+= words[ccLine[k]];
          }
          s.append(totalSpace, ' ');
          outputR.push_back(s);
        return outputR ;

    }
};
