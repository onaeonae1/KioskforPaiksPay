#pragma once

#include "declare.h"

class Shop;
class User;
class Mileage;
class Gifticon;
class Everything;

void initShop(Shop* shop);
void initUser(User* user);
void initMileage(vector<Mileage>& mData);
void initGifti(vector<Gifticon>& gData);

void setUsedGifti(vector<string>& usedGifti);
void initUsedGifti(vector<string>& usedGifti);
void initgiftiCard(vector<giftiCard>& gcData);
void initUsedGiftiCard(vector<string>& usedGiftiCard);
void setUsedGiftiCard(vector<string>& UsedGiftiCard);
void initCoupon(vector<Coupon>& cData);
void initUsedCoupon(vector<string>& usedCoupon);
void setUsedCoupon(vector<string>& usedCoupon);

void init(Shop* shop, User* user, vector<Gifticon>& GiftiData, vector<Mileage>& MileageData,
vector<Coupon>& CouponData, vector<giftiCard>& GifticardData, vector<string>& UsedGifti,
vector<string>& UsedCoupon, vector<string>& UsedGifticard);

void linkMileage(User& user, vector<Mileage>& mdata);

void terminator(vector<string>& UsedGifti,
	vector<string>& UsedCoupon, vector<string>& UsedGifticard);


