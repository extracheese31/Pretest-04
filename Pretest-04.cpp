/*
Nama       : Natasya Rizky Maharani
NPM        : 140810180004
Kelas      : B
Tanggal    : Rabu, 27 Maret 2019
*/

include<iostream>
using namespace std;

struct ElemtList{
    char npm[12];
    char nama[40];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First)
{
    First=NULL;
}
void createElement(pointer& pBaru)
{
    pBaru=new ElemtList;
    cout<<"Masukan Nama: ";cin>> pBaru->nama;
    cout<<"Masukan NPM:  "; cin>> pBaru->npm;
    cout<<"Masukan IPK: "; cin>>pBaru->ipk;
    cout<<endl;
    pBaru->next = NULL;
}
void sortNama(pointer& List first){

 r_mhs tempMhs;

 for(int i=0; i<n;i++){

  for(int j=1;j<n;j++){

   if(strcmp(mhs[j-1].nama, mhs[j].nama)>0){

    tempMhs = mhs[j-1];

    mhs[j-1] = mhs[j];

    mhs[j] = tempMhs;

   }

  }

 }

}

void sortNPM(pointer& List First){

 r_mhs tempMhs;

 for(int i=0; i<n;i++){

  for(int j=1;j<n;j++){

   if(strcmp(mhs[j-1].npm, mhs[j].npm)>0){

    tempMhs = mhs[j-1];

    mhs[j-1] = mhs[j];

    mhs[j] = tempMhs;

   }

  }

 }

}
void traversal(List First)
{
    pointer pBantu;
    pBantu=First;
    while(pBantu != NULL)
    {
        cout<<"Nama"<<endl;
        cout<<"NPM"<<endl;
        cout<<"IPK"<<endl;
        cout<<pBantu->npm<"\t"<<pBantu->nama<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
    }
}
int main(){
    pointer pBaru;
    int n;
    List list;
    cout<<"Masukkan banyaknya data mahasiswa : ";cin>>n;
    createList(list);
    for(int i=0;i<n;i++){
        createElemt(pBaru);
        insertSortNPM(list,pBaru);
    }
    traversal(list);
}
