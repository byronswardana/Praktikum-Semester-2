#include <iostream>
#include<stdio.h>
#include <cstdlib>
typedef struct node{
 int data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, int isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf(akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf( akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf( akar->data);
 }
}

int main(){
    system("color 70");
    int angka;
    printf("\n\n\tPosisi Awal Tree:\n\n");
    printf("\t       9\n\t      / \\\n\t     7   5\n\t    /\n\t   4\n\t  / \\\n\t 3   2\n\n");
    addNode(&akar,angka= '10');
    addNode(&akar->kiri,angka= '7');
    addNode(&akar->kanan,angka= '5');
    addNode(&akar->kiri->kiri,angka= '4');
    addNode(&akar->kiri->kiri->kiri,angka= '4');
    addNode(&akar->kiri->kiri->kanan,angka= '3');
    printf("Tampilan PreOrder  : ");
    preOrder(akar);
    printf("\nTampilan InOrder   : ");
     inOrder(akar);
    printf("\nTampilan PostOrder : ");
    postOrder(akar);
}