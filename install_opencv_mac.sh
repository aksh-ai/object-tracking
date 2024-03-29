xcode-select --install

brew install gcc pkg-config cmake

mkdir Open_CV && cd Open_CV

git clone https://github.com/opencv/opencv.git

mkdir build && cd build

cmake ../opencv/ .

arch -arm64 cmake ../opencv/ -DWITH_QT=OFF -DWITH_OPENGL=OFF -DFORCE_VTK=OFF -DWITH_TBB=OFF -DWITH_GDAL=OFF -DWITH_XINE=OFF -DBUILD_EXAMPLES=OFF -DBUILD_ZLIB=OFF -DBUILD_TESTS=OFF .

arch -arm64 sudo make -j 4

arch -arm64 sudo make install