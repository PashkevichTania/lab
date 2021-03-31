
/*TODO*/

.dark-slider .slider{

}
.light-slider .slider{

}
.slider{
  margin-top: 30px;
  display: flex;
  flex-direction: column;
  align-items: center;
}
.slider-num-1{
  font-family: $font-stack;
  font-style: normal;
  font-weight: 900;
  font-size: 24px;
  line-height: 28px;
}
.slider-num-2{
  font-family: $font-stack;
  font-style: normal;
  font-weight: 900;
  font-size: 14px;
  line-height: 16px;
}
.light-slider .slider-num-1{
  /* base */
  color: #FEFEFE;
}
.light-slider .slider-num-2{
  /* Gray 4 */
  color: #BDBDBD;
}
.dark-slider .slider-num-1{
  /* Gray 1 */
  color: #333333;
}
.dark-slider .slider-num-2{
  /* Gray 4 */
  color: #BDBDBD;
}
/*TODO*/
/*inpe\ut range*/

input[type=range] {
  -webkit-appearance: none;
  width: 245px;
}
input[type=range]:focus {
  outline: none;
}
input[type=range]::-webkit-slider-runnable-track {
  width: 100%;
  height: 5px;
  cursor: pointer;
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]::-webkit-slider-thumb {
  width: 30px;
  height: 10px;
  /* base */
  background: #FEFEFE;
  cursor: pointer;
  -webkit-appearance: none;
  margin-top: -2px;
}
input[type=range]:focus::-webkit-slider-runnable-track {
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]::-moz-range-track {
  width: 100%;
  height: 5px;
  cursor: pointer;
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]::-moz-range-thumb {
  width: 30px;
  height: 10px;
  /* base */
  background: #FEFEFE;
  cursor: pointer;
}
input[type=range]::-ms-track {
  width: 100%;
  height: 5px;
  cursor: pointer;
  background: transparent;
  border-color: transparent;
  border-width: 16px 0;
  color: transparent;
}
input[type=range]::-ms-fill-lower {
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]::-ms-fill-upper {
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]::-ms-thumb {
  width: 30px;
  height: 10px;
  /* base */
  background: #FEFEFE;
  cursor: pointer;
}
input[type=range]:focus::-ms-fill-lower {
  background: rgba(189, 189, 189, 0.57);
}
input[type=range]:focus::-ms-fill-upper {
  background: rgba(189, 189, 189, 0.57);
}

<div class="dark-slider slider">
          <p><span class="dark-slider slider-num-1">02/</span><span class="light-slider slider-num-2">08</span>
          </p>
          <label>
            <input type="range">
          </label>
        </div>
