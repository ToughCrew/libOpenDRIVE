#pragma once
#include "RoadGeometry.h"

struct Line : public RoadGeometry
{
    Line(double s0, double x0, double y0, double hdg0, double length);
    Point2D get_point(double s, double t = 0) override;
};