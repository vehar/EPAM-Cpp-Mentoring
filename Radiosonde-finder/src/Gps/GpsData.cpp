#include "GpsData.h"

GpsData::GpsData() : m_latitude {0}, m_longitude {0}, m_altitude {0}, m_speed {0}, m_course {0} {

}

GpsData::GpsData(const double latitude, const double longitude, const double altitude, 
    const double speed, const double course)
    : m_latitude {latitude}, m_longitude {longitude}, m_altitude {altitude}, m_speed {speed},
    m_course {course} {

}

GpsData::GpsData(const GpsData & gps_data) : m_latitude {gps_data.m_altitude}, m_longitude {gps_data.m_longitude}, 
    m_altitude {gps_data.m_altitude}, m_speed {gps_data.m_speed}, m_course {gps_data.m_course} {

}

double GpsData::getLatitude(void) const {

    return m_latitude;

}

double GpsData::getLongitude(void) const {

    return m_longitude;

}

double GpsData::getAltitude(void) const {

    return m_altitude;

}

double GpsData::getSpeed(void) const {

    return m_speed;

}

double GpsData::getCourse(void) const {

    return m_course;

}

void GpsData::setLatitude(const double latitude) {

    m_latitude = latitude;

}

void GpsData::setLongitude(const double longitude) {

    m_longitude = longitude;

}

void GpsData::setAltitude(const double altitude) {

    m_altitude = altitude;

}

void GpsData::setSpeed(const double speed) {

    m_speed = speed;

}

void GpsData::setCourse(const double course) {

    m_course = course;

}