#include "Private/CloseButton.h"
#include <QSvgWidget>
#include <QHBoxLayout>

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

CloseButton::CloseButton(QWidget* parent) :
  QPushButton(parent) {
  setFlat(true);
  setAutoFillBackground(true);
  setSizePolicy(QSizePolicy());
}

} // namespace Private
} // namespace WRibbon
