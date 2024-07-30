

//muốn sắp xếp cần 1 mảng để sắp xếp và sô phần tử n (2 cái nay di vs nhau)

     :   array[0]    array[1]   array[2]   array[3]   array[4]   array[5]    array[n-1]  
     :
value:      6           4           1          2         5          7

vòng lập for sẽ chạy từ [0] to [n-1]

for(int i=0 ; i < n ; i++) {

// for nay chay tu vi tri i+1 trowr veef vij tris cuooi mang o : n-1;
    for(int j=i+1 ; j < n ; j++) {
        
        a[i] la thang ben trai      a[i] la a[0]
        a[j] la thang ben phai
        if(a[i]>a[j]) {   neu phat hien ben trai lon hon ben phai thi lap tuc hoan vi (doi cho)
            
            int temp = a[i];
            
                a[i] = a[j];
            
                a[j] = temp; 
        }
    }
}