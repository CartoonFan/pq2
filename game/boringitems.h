//
// Created by nbollom on 1/06/16.
//

#ifndef PQ2_BORINGITEMS_H
#define PQ2_BORINGITEMS_H

#include <string>
#include <random>
#include <memory>

namespace data {

    const std::string get_random_boring_item(std::shared_ptr<std::mt19937_64> engine);

}

#endif //PQ2_BORINGITEMS_H
