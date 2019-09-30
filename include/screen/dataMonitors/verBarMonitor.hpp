/*#ifndef VER_BAR_MONITOR_HPP_
#define VER_BAR_MONITOR_HPP_
#include "okapi/api/control/controllerOutput.hpp"
#include "screen/util/baseObject.hpp"
#include "screen/resources.hpp"
#include <sstream>

namespace screen {

class VerBarMonitor : public BaseObject {
public:
  VerBarMonitor(lv_obj_t *parent, std::string iunit = "", double imin = 0, double imax = 100,
                uint16_t ibarWidth = 480, double barPadding = 0,
                lv_style_t *bgStyle = &lv_style_transp, lv_style_t *indicStyle = &lv_style_pretty_color);

  ~VerBarMonitor();

  void setPrecision(uint8_t iprec);
protected:
   virtual void align() override;

   std::string unit;
   std::stringstream dataStr;
   uint8_t prec;

   uint16_t barWidth;

   double min, range;

   lv_obj_t *bar;
   lv_obj_t *data;
};

class VerBarEntry : okapi::ControllerOutput<double> {
public:

protected:

};

}

#endif
*/
