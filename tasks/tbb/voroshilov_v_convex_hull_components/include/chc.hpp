#pragma once

#include <cstddef>
#include <vector>

namespace voroshilov_v_convex_hull_components_tbb {

struct Pixel {
  int y;      // vertical coordinate, 0 is top
  int x;      // horizontal coordinate, 0 is left
  int value;  // the pixel itself

  Pixel() = default;
  Pixel(int y_param, int x_param);
  Pixel(int y_param, int x_param, int value_param);
  Pixel(const Pixel& other) = default;

  Pixel& operator=(const Pixel& other) = default;
  bool operator==(int value_param) const;
  bool operator==(const Pixel& other) const;
};

struct Image {
  int height;
  int width;
  std::vector<Pixel> pixels;

  Image() = default;
  Image(int hght, int wdth, std::vector<int> pxls);
  Image(const Image& other) = default;
  Image& operator=(const Image& other) = default;
  Pixel& GetPixel(int y, int x);
};

struct LineSegment {
  Pixel a;
  Pixel b;

  LineSegment(Pixel& a_param, Pixel& b_param);
};

using Component = std::vector<Pixel>;

using Hull = std::vector<Pixel>;

class UnionFind {
 public:
  std::vector<int> roots;
  std::vector<int> ranks;

  UnionFind() = default;
  UnionFind(int n);
  int FindRoot(int x);
  void Union(int x, int y);
};

void CheckBoundaryPixels(UnionFind& union_find, Image& image, int y, int x);

void MergeComponentsAcrossAreas(std::vector<Component>& components, Image& image, int area_height,
                                std::vector<int>& end_y);

template <typename T>
std::vector<T> MergeVectors(std::vector<std::vector<T>>& vectors);

Component DepthComponentSearchInArea(Pixel start_pixel, Image& image, int index, int start_y, int end_y);

std::vector<Component> FindComponentsInArea(Image& image, int start_y, int end_y, int index_offset);

std::vector<Component> FindComponentsTBB(Image& image);

int CheckRotation(Pixel& first, Pixel& second, Pixel& third);

Pixel FindFarthestPixel(std::vector<Pixel>& pixels, LineSegment& line_segment);

std::vector<Pixel> QuickHull(Component& component);

std::vector<Hull> QuickHullAllTBB(std::vector<Component>& components);

void PackHulls(std::vector<Hull>& hulls, int width, int height, int* hulls_indxs, int* pixels_indxs);

std::vector<Hull> UnpackHulls(std::vector<int>& hulls_indexes, std::vector<int>& pixels_indexes, int height, int width,
                              size_t hulls_size);

}  // namespace voroshilov_v_convex_hull_components_tbb
