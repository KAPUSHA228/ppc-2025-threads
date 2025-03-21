#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <memory>
#include <random>
#include <string>
#include <vector>

#include "core/task/include/task.hpp"
#include "core/util/include/util.hpp"
#include "seq/tsatsyn_a_radix_sort_simple_merge_seq/include/ops_seq.hpp"
static std::vector<double> getRandomVector(int sz, int a, int b) {
  std::random_device dev;
  std::mt19937 gen(dev());
  std::uniform_real_distribution<> dis(a, b);
  std::vector<double> vec(sz);
  for (int i = 0; i < sz; ++i) {
    vec[i] = dis(gen);
  }
  return vec;
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, negative_double_100) {
  // Create data
  int arrsize = 100;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, -100, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, negative_double_1000) {
  // Create data
  int arrsize = 1000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, -100, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, negative_double_10000) {
  // Create data
  int arrsize = 10000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, -100, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, negative_double_100000) {
  // Create data
  int arrsize = 100000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, -100, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, pozitive_double_100) {
  // Create data
  int arrsize = 100;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, 0, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, pozitive_double_1000) {
  // Create data
  int arrsize = 1000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, 0, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, pozitive_double_10000) {
  // Create data
  int arrsize = 10000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, 0, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
TEST(tsatsyn_a_radix_sort_simple_merge_seq, pozitive_double_100000) {
  // Create data
  int arrsize = 100000;
  std::vector<double> in;
  std::vector<double> out(arrsize, 0);

  in = getRandomVector(arrsize, 0, 100);
  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());
  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}

TEST(tsatsyn_a_radix_sort_simple_merge_seq, test_matmul_from_file) {
  std::string line;
  std::ifstream test_file(ppc::util::GetAbsolutePath("seq/tsatsyn_a_radix_sort_simple_merge_seq/data/test.txt"));
  if (test_file.is_open()) {
    getline(test_file, line);
  }
  test_file.close();

  const size_t count = std::stoi(line);

  // Create data
  std::vector<double> in = getRandomVector(count * count, 0, 100);
  std::vector<double> out(count * count, 0);

  // Create task_data
  auto task_data_seq = std::make_shared<ppc::core::TaskData>();
  task_data_seq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  task_data_seq->inputs_count.emplace_back(in.size());
  task_data_seq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  task_data_seq->outputs_count.emplace_back(out.size());

  // Create Task
  tsatsyn_a_radix_sort_simple_merge_seq::TestTaskSequential test_task_sequential(task_data_seq);
  ASSERT_EQ(test_task_sequential.Validation(), true);
  test_task_sequential.PreProcessing();
  test_task_sequential.Run();
  test_task_sequential.PostProcessing();
  std::sort(in.begin(), in.end());
  EXPECT_EQ(in, out);
}
