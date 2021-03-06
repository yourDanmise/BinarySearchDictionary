# BinarySearchDictionary
## introduction
  This is the dictionary of all the materials of athletes who have ever taken part in the Olympic Games. We use the nmae of the competitor as the primary key to build a binary search tree. There are about 540,000 lines in 1.csv(1.zip). we need to use binary search tree to search the name quickly and accurately.
## example output
### – output file (information):
  Cornelia Aalten (-Strannood) −− > ID: 8 Sex: F || Age: 18 || Height: 168 ||
Weight: NA || Team: Netherlands || NOC: NED || Games: 1932 Summer || Year: 1932 || Season:
Summer || City: Los Angeles || Sport: Athletics || Event: Athletics Women’s 100 metres ||
Medal: NA ||  
  Cornelia Aalten (-Strannood) −− > ID: 8 Sex: F || Age: 18 || Height: 168 ||
Weight: NA || Team: Netherlands || NOC: NED || Games: 1932 Summer || Year: 1932 || Season:
Summer || City: Los Angeles || Sport: Athletics || Event: Athletics Women’s 4 x 100 metres
Relay || Medal: NA ||  
  Nir Lipo −− > NOTFOUND  
### – stdout (comparisons):
  Cornelia Aalten (-Strannood) −− > 423  
  Nir Lipo −− > 401  
## difference between stage 1 & 2
In Stage 1 of the assignment we will locate the duplicates by continuing our search until we
reach a leaf node, regardless of whether or not we have already found a match or matches.  

![stage1](https://raw.github.com/yourDanmise/BinarySearchDictionary/master/stage1.png "stage1")  
![stage1-output](https://raw.github.com/yourDanmise/BinarySearchDictionary/master/stage1-output.png "stage1-output")  
In Stage 2, we will structure the tree so that once a key is found, all duplicate keys can be
found without further key comparisons.  

![stage2](https://raw.github.com/yourDanmise/BinarySearchDictionary/master/stage2.png "stage2")  
![stage2-output](https://raw.github.com/yourDanmise/BinarySearchDictionary/master/stage2-output.png "stage2-output")  
