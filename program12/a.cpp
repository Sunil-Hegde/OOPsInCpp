#include<iostream>
using namespace std;

class matrix{
    private:
        int m[5][5];
        int row, column;
    public:
        void getData(){
            cout<<"\tEnter number of rows and columns (<=5): ";
            cin>>row>>column;
            cout<<"\tEnter elements of the matrix:\n";
            for(int i = 0; i < row; i++){
                cout<<"\t\t";
                for(int j = 0; j < column; j++){
                    cin>>m[i][j];
                }
            }
        }

        bool operator==(matrix m){
            if (row == m.row && column == m.column){
                return true;
            }
            return false;
        }

        matrix operator+(matrix addMatrix){
            matrix result;
            result.row = row;
            result.column = column;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    result.m[i][j] = m[i][j] + addMatrix.m[i][j];
                }
            }
            return result;
        }

        matrix operator-(matrix subMatrix){
            matrix result;
            result.row = row;
            result.column = column;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    result.m[i][j] = m[i][j] - subMatrix.m[i][j];
                }
            }
            return result;
        }

        friend std::ostream& operator<<(std::ostream& out, const matrix& m) {
            for (int i = 0; i < m.row; i++) {
                out << "\t\t";
                for (int j = 0; j < m.column; j++) {
                    out << m.m[i][j] << " ";
                }
                out << "\n";
            }
            return out;
        }
};

int main(){
    matrix m1, m2, m3, m4;
    cout<<"Enter details of 1st Matrix:\n";
    m1.getData();
    cout<<"\nEnter details of 2nd Matrix:\n";
    m2.getData();
    if(m1==m2){
        m3 = m1+m2;
        m4 = m1-m2;
        cout<<"\nAddition of 1st and 2nd Matrix:\n";
        cout<<m3;
        cout<<"\nDifference between 1st and 2nd Matrix:\n";
        cout<<m4;
    } else {
        cout<<"Order of 1st and 2nd Matrix is not same.\n";
    }
    return 0;
}