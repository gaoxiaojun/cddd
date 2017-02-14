#ifndef CDDD_UTILS_TYPE_ID_GENERATOR_H__
#define CDDD_UTILS_TYPE_ID_GENERATOR_H__

#include <atomic>
#include <cstdint>

namespace cddd {
namespace utils {

class type_id_generator {
public:
   typedef std::size_t type_id;

   template<class T>
   static inline type_id get_id_for_type() {
      static const type_id id = ++current_id;
      return id;
   }

private:
   static std::atomic<type_id> current_id;
};

}
}

#endif
