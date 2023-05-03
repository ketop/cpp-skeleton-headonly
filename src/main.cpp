#include "nlohmann/json.hpp"
#include "spdlog/spdlog.h"
using json = nlohmann::json;


int main()
{
  json test = R"({"name":"ketop", "age":31, "company":"ZTE"})"_json;
  spdlog::info("json test: {}", test.dump(2));
  

  spdlog::info("hello there");
  return 0;
}
